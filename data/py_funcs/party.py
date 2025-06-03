#%% Define administrations and their start & end years
# If there is a new administration, add {president name: [start year, end year]} to the dictionary below.
admin_year = {'Reagan': [1981, 1989],
              'Bush 41': [1989, 1993],
              'Clinton': [1993, 2001],
              'Bush 43': [2001, 2009],
              'Obama': [2009, 2017],
              'Trump 45': [2017, 2021],
              'Biden': [2021, 2025],
              'Trump 47': [2025, 2029]}

#%% Presidential party dictionary
# If there is a new presidential year, add {presidential year: party} to the dictionary below.
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
    2024: 'Democratic',
    2025: 'Republican',
    2026: 'Republican',
    2027: 'Republican',
    2028: 'Republican'
}

#%% Function to identify party
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

#%% Another president dictionary with year and party (used for major rules)
# revise these constants after each presidential transition
END_OF_ADMIN = (2000, 2008, 2016, 2020, 2024, 2028)
PRESIDENTIAL_ADMINS = {
    "Clinton": {
        "party": "D",
        "years": range(1992, 2001)
        },
    "Bush": {
        "party": "R",
        "years": range(2001, 2009)
        },
    "Obama": {
        "party": "D",
        "years": range(2009, 2017)
        },
    "Trump45": {
        "party": "R",
        "years": range(2017, 2021)
        },
    "Biden": {
        "party": "D",
        "years": range(2021, 2025)
        },
    "Trump47":{
        "party": "R",
        "years": range(2025, 2029)
        }
    }