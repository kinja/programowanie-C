/*
	2.2.2 (r) Napisz program, który wczytuje ze standardowego wejścia nie-
	ujemną liczbę całkowitą n i wypisuje na standardowym wyjściu liczbę
	n!. W programie użyj samodzielnie zaimplementowanej funkcji liczącej
	wartość silni.
*/


#include <stdio.h>

int silnia ( int n )
{
	if ( n == 1 )
	{
		return 1;
	}
	else
	{
		return n * silnia( n - 1 );
	}

}


int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "%i ! = %i \n", n, silnia(n) );

	return 0;
}

