/*
	1.4.6 Napisz program, który wczytuje ze standardowego wejścia liczbę cał-
	kowitą n (n > 2) i wypisuje na standardowym wyjściu iloczyn liczb
	parzystych z zakresu od 2 do n (czyli 2 ∗ 4 ∗ . . . ∗ n).
*/


#include <stdio.h>

int main()
{
	int n;
	int iloczyn;

	scanf ( "%i", &n );

	for ( int i = 2 ; i <= n ; i += 2 )
	{
		printf ( "%i \n", i );
	}

	return 0;
}

