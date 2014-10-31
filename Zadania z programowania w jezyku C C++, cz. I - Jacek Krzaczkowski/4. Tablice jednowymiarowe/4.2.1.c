/*
	4.2.1 Napisz funkcję, która otrzymuje dwa argumenty: nieujemną liczbę cał-
	kowitą n oraz n-elementową tablicę tab elementów typu int i:
	a) (r) nadaje wartość zero wszystkim elementom tablicy tab,
	b) (r) zapisuje do kolejnych elementów tablicy wartości równe ich in-
	deksom (do komórki o indeksie i funkcja ma zapisywać wartość i),
	c) podwaja wartość wszystkich elementów w tablicy tab,
	d) do wszystkich komórek tablicy tab wstawia wartości bezwzględne
	ich pierwotnych wartości.
*/



#include <stdio.h>


void zeruj ( int n, int tab[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab[ i ] = 0;
	}
}


void index ( int n, int tab[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab[ i ] = i;
	}
}


void podwajaj ( int n, int tab[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab[ i ] = tab[ i ] * 2;
	}
}


void bezwzgledna ( int n, int tab[ n ] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		if ( tab[ i ] < 0 )
		{
			tab[ i ] = - tab[ i ];
		}
	}
}


void wyswietl ( int n, int tab[ n ] )
{
	printf( "---\n" );

	for ( int i = 0 ; i < n ; i += 1 )
	{
		printf ( "%i \n", tab[ i ] );
	}
}


int main()
{
	int n;

	scanf ( "%i", &n );

	int tab[ n ];

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab[ i ] );
	}

	wyswietl( n, tab );

	index( n, tab );

	wyswietl( n, tab );

	return 0;
}

