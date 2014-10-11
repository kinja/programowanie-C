/*
	1.4.5 Napisz program, który wczytuje ze standardowego wejścia nieujemną
	liczbę całkowitą n i wypisuje na standardowym wyjściu sumę kwadra-
	tów liczb od 0 do n, czyli wartość 0 2 + 1 2 + 3 2 + ... + n 2 .
*/


#include <stdio.h>

int main()
{
	int n;
	int suma = 0;

	scanf ( "%i", &n );

	for ( int i=1 ; i<=n ; i+=1 )
	{
		suma += i * i;
	}

	printf ( "%i \n", suma );

	return 0;
}

