"""
This patch fixes an issue where unwanted characters appeared after the progress bar in the terminal (see [GitHub issue 101](https://github.com/verigak/progress/issues/101)).
The code is taken from an [open pull request](https://github.com/verigak/progress/pull/109) by @james-duvall.
This script ensure that the patched code overwrites the imported package's Infinite class (inspired by [this solution](https://github.com/verigak/progress/issues/58#issuecomment-471718558) from @an0ndev).
"""

from __future__ import division, print_function

from collections import deque
from datetime import timedelta
from sys import stderr
import cursor
try:
    from time import monotonic
except ImportError:
    from time import time as monotonic


# source: https://github.com/verigak/progress/pull/109
class PatchedInfinite(object):
    """Patched by @james-duvall in pull request: https://github.com/verigak/progress/pull/109."""
    file = stderr
    sma_window = 10         # Simple Moving Average window
    check_tty = True
    hide_cursor = True

    def __init__(self, message='', **kwargs):
        self.index = 0
        self.start_ts = monotonic()
        self.avg = 0
        self._avg_update_ts = self.start_ts
        self._ts = self.start_ts
        self._xput = deque(maxlen=self.sma_window)
        for key, val in kwargs.items():
            setattr(self, key, val)

        self._max_width = 0
        self._hidden_cursor = False
        self.message = message

        if self.file and self.is_tty():
            if self.hide_cursor:
                cursor.hide()
                self._hidden_cursor = True
        self.writeln('')

    def __del__(self):
        if self._hidden_cursor:
            cursor.show()

    def __getitem__(self, key):
        if key.startswith('_'):
            return None
        return getattr(self, key, None)

    @property
    def elapsed(self):
        return int(monotonic() - self.start_ts)

    @property
    def elapsed_td(self):
        return timedelta(seconds=self.elapsed)

    def update_avg(self, n, dt):
        if n > 0:
            xput_len = len(self._xput)
            self._xput.append(dt / n)
            now = monotonic()
            # update when we're still filling _xput, then after every second
            if (xput_len < self.sma_window or
                    now - self._avg_update_ts > 1):
                self.avg = sum(self._xput) / len(self._xput)
                self._avg_update_ts = now

    def update(self):
        pass

    def start(self):
        pass

    def writeln(self, line):
        if self.file and self.is_tty():
            width = len(line)
            if width < self._max_width:
                # Add padding to cover previous contents
                line += ' ' * (self._max_width - width)
            else:
                self._max_width = width
            print('\r' + line, end='', file=self.file)
            self.file.flush()

    def finish(self):
        if self.file and self.is_tty():
            print(flush = True, file=self.file)
            if self._hidden_cursor:
                cursor.show()
                self._hidden_cursor = False

    def is_tty(self):
        try:
            return self.file.isatty() if self.check_tty else True
        except AttributeError:
            msg = "%s has no attribute 'isatty'. Try setting check_tty=False." % self
            raise AttributeError(msg)

    def next(self, n=1):
        now = monotonic()
        dt = now - self._ts
        self.update_avg(n, dt)
        self._ts = now
        self.index = self.index + n
        self.update()

    def iter(self, it):
        self.iter_value = None
        with self:
            for x in it:
                self.iter_value = x
                yield x
                self.next()
        del self.iter_value

    def __enter__(self):
        self.start()
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.finish()


# source: https://github.com/verigak/progress/issues/58#issuecomment-471718558
def getpatchedprogress():
    # Import a clean version of the entire package.
    import progress

    # Get the current platform.
    from sys import platform

    # Check if we're on Windows.
    if platform.startswith("win"):
        # Disable HIDE_CURSOR and SHOW_CURSOR characters.
        progress.HIDE_CURSOR = ''
        progress.SHOW_CURSOR = ''
    
    # Copy over the patched Infinite class into the imported class.
    progress.Infinite = PatchedInfinite
    
    # Return the modified version of the entire package.
    return progress
