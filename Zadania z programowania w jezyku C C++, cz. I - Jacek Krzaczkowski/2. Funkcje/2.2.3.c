/*
	2.2.3 Napisz program, który wczytuje ze standardowego wejścia nieujemną
	liczbę całkowitą n (n > 2) i wypisuje na standardowym wyjściu naj-
	większą liczbę k taką, że k dzieli n i k < n. Algorytm wyszukiwania
	liczby k spełniającej powyższe warunki umieść w oddzielnej funkcji.
*/


#include <stdio.h>

int wyszukaj ( int n )
{
	for ( int k = (n - 1) ; k >= 0 ; k -= 1 )
	{
		if ( n % k == 0 )
		{
			return k;
		}
	}

	return 0;
}

int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "%i \n", wyszukaj(n) );

	return 0;
}

