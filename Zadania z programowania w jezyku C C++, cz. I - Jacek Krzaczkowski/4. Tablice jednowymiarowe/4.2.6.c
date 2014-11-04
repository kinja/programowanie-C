/*
	4.2.6 Napisz funkcję, która otrzymuje trzy argumenty: dodatnią liczbę cał-
	kowitą n oraz dwie n-elementowe tablice tab1, tab2 o elementach
	typu int i:
	a) (r) przepisuje zawartość tablicy tab1 do tablicy tab2,
	b) przepisuje zawartość tablicy tab1 do tablicy tab2 w odwrotnej
	kolejności (czyli element tab1[0] ma zostać zapisany do komórki
	tablicy tab2 o indeksie n − 1).
*/

#include <stdio.h>

void przepisywanie ( int n, int tab1[ n ], int tab2[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab1[ i ] = tab2[ i ];
	}
}

void odwrotna ( int n, int tab1[ n ], int tab2[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab2[ i ] = tab1[ n - 1 - i ];
	}
}


void wyswietl ( int n, int tab[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		printf ( "%i ", tab[ i ] );
	}
	printf( "\n" );
}


int main()
{
	int n;

	scanf ( "%i", &n );

	int tab1[ n ];
	int tab2[ n ];

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab1[ i ] );
	}

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab2[ i ] );
	}


	wyswietl ( n, tab1 );
	wyswietl ( n, tab2 );

	printf("-----------------------------\n");

	odwrotna ( n, tab1, tab2 );


	wyswietl ( n, tab1 );
	wyswietl ( n, tab2 );

	return 0;
}
