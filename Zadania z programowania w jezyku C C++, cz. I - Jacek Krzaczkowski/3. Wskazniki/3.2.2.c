/*
	3.2.2 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
	zmiennych typu int, która zwraca jako wartość wskaźnik na zmienną
	przechowującą mniejszą z liczb wskazywanych przez argumenty.
*/


#include <stdio.h>

int* mniejsza ( int* a, int* b )
{
	if ( *a < *b )
	{
		return a;
	}

	return b;
}


int main()
{
	int a = 20;
	int b = 10;

	printf ( "a = %i  @ %p \n", a, &a );
	printf ( "b = %i  @ %p \n", b, &b );

	printf ( "mniejsza = %i @ %p \n", *mniejsza(&a, &b), mniejsza(&a, &b) );

	return 0;
}

