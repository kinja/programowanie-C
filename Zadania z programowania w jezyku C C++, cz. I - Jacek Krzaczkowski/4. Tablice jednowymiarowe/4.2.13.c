/*
	4.2.13  Napisz funkcję, która otrzymuje jako argument dodatnią licz-
	bę całkowitą n, a następnie tworzy dynamiczną n-elementową tablicę
	o elementach typu int i zwraca jako wartość wskaźnik do jej pierw-
	szego elementu.

	4.2.15 Napisz funkcję, która dostaje jako argument wskaźnik do jed-
	nowymiarowej dynamicznej tablicy o elementach typu int i zwalnia
	pamięć zajmowaną przez przekazaną w argumencie tablicę.
*/


#include <stdio.h>
#include <stdlib.h>


int* zaalokuj ( int rozmiar )
{
	return malloc(rozmiar * sizeof( int ));
}


void zwolnij ( int* tab )
{
	free ( tab );
}


int main ()
{
	int* tab = zaalokuj( 5 );

	printf ( "%p \n", tab );

	zwolnij( tab );

	return 0;
}

