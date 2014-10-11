/*
	2.2.6 Napisz funkcję, która dostaje jako argumenty nieujemne liczby całko-
	wite n i m, z których co najmniej jedna jest różna od zera i zwraca
	jako wartość n^m .
*/


#include <stdio.h>

int potega ( int n, int m )
{
	int wynik = 1;

	for ( int i = 0 ; i < m ; i += 1 )
	{
		wynik = wynik * n;
	}

	return wynik;
}


int main()
{
	int n;
	int m;

	scanf ( "%i %i", &n, &m );

	printf ( "%i ^ %i = %i \n", n, m, potega( n, m ) );

	return 0;
}

