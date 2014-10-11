/*
	2.2.4 Napisz funkcję, która dostaje jako argument nieujemną liczbę całko-
	witą n i zwraca jako wartość liczbę 2^n.
*/



#include <stdio.h>

int potega ( int n )
{
	int wynik = 1;

	for ( int i = 0 ; i < n ; i += 1 )
	{
		wynik = wynik * 2;
	}
	return wynik;
}


int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "%i \n", potega(n) );

	return 0;
}

