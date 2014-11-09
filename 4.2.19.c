/*
	4.2.19  Napisz funkcję, która dostaje w argumentach dodatnią liczbę cał-
	kowitą n oraz n-elementową tablicę liczb całkowitych tab1 o elemen-
	tach typu int i przepisuje do nowo utworzonej tablicy tab2 elementy
	tablicy tab1 o wartości różnej od zera. Rozmiar tablicy tab2 powinien
	być równy liczbie niezerowych elementów tablicy tab1. Jako wartość
	funkcja powinna zwrócić wskaźnik na pierwszy element tablicy tab2.
*/


#include <stdio.h>
#include <stdlib.h>


int* przepisz ( int n, int tab[] )
{
	int el_niezerowe = 0;

	for ( int i = 0 ; i < n ; i += 1 )
	{
		if ( tab[ i ] != 0 )
		{
			el_niezerowe += 1;
		}
	}

	int* tab2 = malloc ( el_niezerowe * sizeof ( int ));

	int j = 0;

	for ( int i = 0 ; i < n ; i += 1)
	{
		if ( tab[ i ] != 0 )
		{
			tab2[ j ] = tab[ i ];
			j += 1;
		}
	}

	return tab2;
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
	int tab[] = { 0, 7, 1, 0, 2, 8, 5, 0, 0 };

	wyswietl ( 9, tab );

	printf ( "----- \n" );

	int* tab2 = przepisz ( 9, tab );

	wyswietl ( 5, tab2 );

	return 0;
}
