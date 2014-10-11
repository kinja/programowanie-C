/*
	2.2.1 (r) Napisz program, który wczytuje ze standardowego wejścia liczbę
	całkowitą n i wypisuje na standardowe wyjście wartość bezwzględną
	z n. Do rozwiązania zadania nie używaj funkcji bibliotecznych za wy-
	jątkiem operacji wejścia/wyjścia. W programie użyj samodzielnie za-
	implementowanej funkcji liczącej wartość bezwzględną.
*/

#include <stdio.h>

int bezwzgledna ( int n )
{
	if ( n >= 0 )
	{
		return n;
	}
	else
	{
		return -n;
	}
}


int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "|%i| = %i \n", n, bezwzgledna(n) );

	return 0;
}

