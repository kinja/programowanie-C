/*
	4.2.12  Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę cał-
	kowitą n oraz n-elementową tablicę tab o elementach typu int i:
	a) (r) odwraca kolejność elementów tablicy tab.
	b) (r) przesuwa o jeden w lewo wszystkie elementy tablicy
	(tak, żeby wartość elementu o indeksie n − 1 znalazła się w ele-
	mencie o indeksie n − 2, wartość elementu o indeksie n − 2 znalazła
	się w elemencie o indeksie n − 3, zaś wartość elementu o indeksie
	0 w elemencie o indeksie n − 1),
	c) (r,!) przesuwa o jeden w prawo wszystkie elementy tablicy
	(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie
	o indeksie 1, wartość elementu o indeksie 1 znalazła się w elemencie
	o indeksie 2, zaś wartość elementu o indeksie n − 1 w elemencie
	o indeksie 0),
	d) (*,r,!) sortuje rosnąco elementy tablicy tab (porządkuje elementy
	przechowywane w tablicy w taki sposób aby ciąg
	tab[0], tab[1],. . . ,tab[n-1] był ciągiem niemalejącym),
	e) sortuje malejąco elementy tablicy tab.
*/


#include <stdio.h>


void fun_a ( int n, int tab[] )
{
	int tmp;

	for ( int i = 0 ; i < n/2 ; i += 1 )
	{
		tmp = tab[ i ];
		tab[ i ] = tab[ n - 1 - i ];
		tab[ n - 1 - i ] = tmp;
	}

}


void fun_b ( int n, int tab[] )
{
	int tmp = tab[ 0 ];

	for ( int i = 0 ; i < n - 1 ; i += 1 )
	{
		tab[ i ] = tab[ i + 1 ];
	}

	tab[ n -1 ] = tmp;
}


void fun_c ( int n, int tab[] )
{
	int tmp = tab[ n - 1 ];

	for ( int i = n - 1 ; i > 0 ; i -= 1 )
	{
		tab[ i ] = tab[ i - 1 ];
	}

	tab[ 0 ] = tmp;
}


void fun_d ( int n, int tab[] )
{
	int tmp;

	for ( int j = 0 ; j < n ; j += 1 )
	{
		for ( int i = 0 ; i < n - 1 ; i += 1 )
		{
			if ( tab[ i ] > tab[ i + 1] )
			{
				tmp = tab[ i ];
				tab[ i ] = tab[ i + 1 ];
				tab[ i + 1 ] = tmp;
			}
		}
	}
}


void fun_e ( int n, int tab[] )
{
	int tmp;

	for ( int j = 0 ; j < n ; j += 1 )
	{
		for ( int i = 0 ; i < n - 1 ; i += 1 )
		{
			if ( tab[ i ] < tab[ i + 1] )
			{
				tmp = tab[ i ];
				tab[ i ] = tab[ i + 1 ];
				tab[ i + 1 ] = tmp;
			}
		}
	}
}



void wyswietl ( int n, int tab[] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		printf ( "%i ", tab[ i ] );
	}

	printf ( "\n" );
}


int main ()
{
	int tablica[] = { 7, 1, 2, 8, 5 };

	fun_e ( 5, tablica );

	wyswietl ( 5, tablica);

	return 0;
}
