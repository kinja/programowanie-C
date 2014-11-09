/*
	4.2.10  Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę cał-
	kowitą n oraz n-elementową tablicę tab o elementach typu int i:
	a) (r,!) zwraca największą wartość przechowywaną w tablicy tab,
	b) zwraca najmniejszą wartość przechowywaną w tablicy tab,
	c) (r,!) zwraca indeks elementu tablicy tab o największej wartości,
	d) zwraca indeks elementu tablicy tab o najmniejszej wartości,
	e) zwraca największą spośród wartości bezwzględnych elementów prze-
	chowywanych w tablicy tab,
	f) zwraca indeks elementu tablicy tab o największej wartości bez-
	względnej.
*/


#include <stdio.h>

int fun_a ( int n, int tab[] )
{
	int najwiekszy = tab[ 0 ];

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( tab[ i ] > najwiekszy )
		{
			najwiekszy = tab[ i ];
		}
	}

	return najwiekszy;
}


int fun_b ( int n, int tab[] )
{
	int najmniejszy = tab[ 0 ];

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( tab[ i ] < najmniejszy )
		{
			najmniejszy = tab[ i ];
		}
	}

	return najmniejszy;
}


int fun_c ( int n, int tab[] )
{
	int najwiekszy = tab[ 0 ];
	int index = 0;

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( tab[ i ] > najwiekszy )
		{
			najwiekszy = tab[ i ];

			index = i;
		}
	}

	return index;
}


int fun_d ( int n, int tab[] )
{
	int najmniejszy = tab[ 0 ];
	int index = 0;

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( tab[ i ] < najmniejszy )
		{
			najmniejszy = tab[ i ];

			index = i;
		}
	}

	return index;
}


#define bezwzgledna( x )  ( ( x < 0 ) ? ( -x ) : ( x ) )


int fun_e ( int n, int tab[] )
{
	int najwiekszy = bezwzgledna( tab[ 0 ] );

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( bezwzgledna( tab[ i ] ) > najwiekszy )
		{
			najwiekszy = bezwzgledna( tab[ i ] );
		}
	}

	return najwiekszy;
}


int fun_f ( int n, int tab[] )
{
	int najwiekszy = bezwzgledna( tab[ 0 ] );
	int index = 0;

	for ( int i = 1 ; i < n ; i +=1 )
	{
		if ( bezwzgledna( tab[ i ] ) > najwiekszy )
		{
			najwiekszy = bezwzgledna( tab[ i ] );

			index = i;
		}
	}

	return index;
}



int main ()
{
	int tab[] = { -7, -5, 3, -4, 1, -8 };

	printf ( "%i \n", fun_f( 6, tab ) );

	return 0;
}

