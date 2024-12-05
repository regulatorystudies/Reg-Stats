#  Identify presidential party for each year

# Party dictionry
party_dict={
    1981: 'Republican',
    1982: 'Republican',
    1983: 'Republican',
    1984: 'Republican',
    1985: 'Republican',
    1986: 'Republican',
    1987: 'Republican',
    1988: 'Republican',
    1989: 'Republican',
    1990: 'Republican',
    1991: 'Republican',
    1992: 'Republican',
    1993: 'Democratic',
    1994: 'Democratic',
    1995: 'Democratic',
    1996: 'Democratic',
    1997: 'Democratic',
    1998: 'Democratic',
    1999: 'Democratic',
    2000: 'Democratic',
    2001: 'Republican',
    2002: 'Republican',
    2003: 'Republican',
    2004: 'Republican',
    2005: 'Republican',
    2006: 'Republican',
    2007: 'Republican',
    2008: 'Republican',
    2009: 'Democratic',
    2010: 'Democratic',
    2011: 'Democratic',
    2012: 'Democratic',
    2013: 'Democratic',
    2014: 'Democratic',
    2015: 'Democratic',
    2016: 'Democratic',
    2017: 'Republican',
    2018: 'Republican',
    2019: 'Republican',
    2020: 'Republican',
    2021: 'Democratic',
    2022: 'Democratic',
    2023: 'Democratic',
    2024: 'Democratic'
}

# Function to identify party
def input_party(year):

    if year in party_dict:
        # Fetch party from the dictionary
        output=party_dict[year]

    else:
        # Get user input if not available
        party_option = ['democratic','d','republican','r']
        while True:
            party=input(f'Is presidential year {year} Democratic (d) or Republican (r)? >>> ').lower()
            if party in party_option:
                output='Democratic' if (party in ['democratic','d']) else 'Republican'
                print('Please update the party dictionary in the py_funcs/get_party.py module.')
                break
            else:
                print(f'ERROR: Your input party "{party}" is not valid. Try again.')

    return output