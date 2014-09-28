/*
	3.2.4 Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmien-
	nych typu int, która zamienia ze sobą wartości wskazywanych zmien-
	nych tylko wtedy, gdy wskazywana przez drugi argument zmienna jest
	mniejsza od zmiennej wskazywanej przez pierwszy argument.
*/

#include <stdio.h>

void zamien_jesli_mniejsza ( int* a, int* b )
{
	if ( *a < *b )
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main()
{
	int a = 5;
	int b = 20;

	printf ( "%i %i \n", a, b );
	zamien_jesli_mniejsza ( &a, &b );
	printf ( "%i %i \n", a, b );
	zamien_jesli_mniejsza ( &a, &b );
	printf ( "%i %i \n", a, b );

	return 0;
}

