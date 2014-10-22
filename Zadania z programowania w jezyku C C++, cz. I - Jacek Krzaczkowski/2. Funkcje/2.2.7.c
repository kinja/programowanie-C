/*
	2.2.7 Napisz funkcję, która dostaje jako argumenty liczby całkowite n i m,
	z których co najmniej jedna jest różna od zera i zwraca jako wartość
	n^m .
*/

#include <stdio.h>

int potega ( int n, int m )
{
	int iloczyn = 1;

	for ( int i = 0 ; i < m ; i += 1 )
	{
		iloczyn = iloczyn * n;
	}

	return iloczyn;
}


int main()
{
	int a;
	int b;

	scanf ( "%i %i", &a, &b );

	printf ( "%i \n", potega( a, b ) );

	return 0;
}

