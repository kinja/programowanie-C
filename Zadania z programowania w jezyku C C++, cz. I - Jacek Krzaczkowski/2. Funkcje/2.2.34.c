/*
	2.2.34 Napisz funkcję, która dostaje jako argumenty pięć
	liczb typu int i zwraca iloczyn podanych liczb.
*/

#include <stdio.h>

int iloczyn ( int a, int b, int c, int d, int e )
{
	int wynik = a * b * c * d * e;

	return wynik;
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;

	scanf ( "%i %i %i %i %i", &a, &b, &c, &d, &e );

	int w = iloczyn( a, b, c, d, e );

	printf ( "%i \n", w );

	return 0;
}

