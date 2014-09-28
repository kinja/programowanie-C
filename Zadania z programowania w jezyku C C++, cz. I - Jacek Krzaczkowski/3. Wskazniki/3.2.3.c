/*
	3.2.3 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
	zmiennych typu int, która zamienia ze sobą wartości wskazywanych
	zmiennych.
*/

#include <stdio.h>

void zamien ( int* a, int* b )
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 20;
	int b = 10;

	printf ( "%i %i \n", a, b );
	zamien ( &a, &b );
	printf ( "%i %i \n", a, b );

	return 0;
}

