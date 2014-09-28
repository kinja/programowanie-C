/*
	3.2.1 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
	zmiennych typu int, która zwraca jako wartość mniejszą z liczb wska-
	zywanych przez argumenty.
*/


#include <stdio.h>

int mniejsza ( int* a, int* b )
{
	if ( *a < *b )
	{
		return *a;
	}

	return *b;
}

int main()
{
	int a = 20;
	int b = 10;

	printf ( "%i \n", mniejsza(&a, &b) );

	return 0;
}

