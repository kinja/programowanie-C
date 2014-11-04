/*
	4.2.2 Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę cał-
	kowitą n oraz n-elementową tablicę tab o elementach typu int i zwraca 
	jako wartość:
	b) sumę elementów tablicy tab,
	c) sumę kwadratów elementów tablicy tab.
*/

#include <stdio.h>


int suma ( int n, int tab[ n ] )
{
	int s = 0;

	for ( int i = 0 ; i < n ; i += 1)
	{
		s = s + tab[ i ];
	}

	return s;
}


int kwadrat ( int n, int tab[ n ] )
{
	int s = 0;

	for ( int i = 0 ; i < n ; i += 1)
	{
		s = s + tab[ i ] * tab[ i ];
	}

	return s;
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

	printf ( "suma = %i \n", suma( n, tab ) );

	printf ( "suma kwadratów = %i \n", kwadrat( n, tab ) );

	return 0;
}
