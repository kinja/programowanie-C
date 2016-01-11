/*
	1.4.4 (r) Napisz program, który wczytuje ze standardowego wejścia nie-
	ujemną liczbę całkowitą n i wypisuje na standardowym wyjściu liczbę
	n!.
*/


#include <stdio.h>

int silnia ( int n )
{
	int wynik = 1;
	for ( int i = 1 ; i <= n ; i += 1 )
	{
		wynik *= i;
	}
	return wynik;
}

int main()
{
	printf ( "%i \n", silnia(5) );
	return 0;
}


