/*
	4.2.7
	 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
	całkowitą n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o ele-
	mentach typu int, i:
	a) przypisuje elementom tablicy tab3 sumę odpowiadających im ele-
	mentów tablic tab1 i tab2 (do komórki tablicy tab3 o indeksie i
	powinna trafić suma elementów tab1[i] i tab2[i]),
	b) przypisuje elementom tablicy tab3 większy spośród odpowiadają-
	cych im elementów tablic tab1 i tab2 (do komórki tablicy tab3
	o indeksie i powinien trafić większy spośród elementów tab1[i]
	i tab2[i]),
	c) przypisuje zawartość tablicy tab1 do tablicy tab2, zawartość ta-
	blicy tab2 do tablicy tab3 oraz zawartość tablicy tab3 do tablicy
	tab1.
*/

#include <stdio.h>

void przypisywanie ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{

	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab3[ i ] = tab1[ i ] + tab2[ i ];
	}
}


void wiekszy ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{

	for ( int i = 0 ; i < n ; i += 1 )
	{
		if ( tab1[ i ] < tab2[ i ] )
		{
			tab3[ i ] = tab2[ i ];
		}
		else
		{
			tab3[ i ] = tab1[ i ];
		}
	}
}


void zamiana ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{
	int tmp;

	for ( int i = 0 ; i < n ; i += 1 )
	{
		tmp = tab2[ i ];
		tab2[ i ] = tab1[ i ];
		tab1[ i ] = tab3[ i ];
		tab3[ i ] = tmp;
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
	int tab3[ n ];

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab1[ i ] );
	}

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab2[ i ] );
	}

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab3[ i ] );
	}

	wyswietl ( n, tab1 );
	wyswietl ( n, tab2 );
	wyswietl ( n, tab3 );

	printf ( "----------------\n" );

	zamiana ( n, tab1, tab2, tab3 );

	wyswietl ( n, tab1 );
	wyswietl ( n, tab2 );
	wyswietl ( n, tab3 );

	return 0;
}
