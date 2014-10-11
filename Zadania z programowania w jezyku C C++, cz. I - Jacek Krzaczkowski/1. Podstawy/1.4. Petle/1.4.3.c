/*
	1.4.3 Napisz program wczytujący ze standardowego wejścia trzy dodatnie
	liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
	wielokrotności n większe od m i mniejsze od k.
*/

#include <stdio.h>

int main()
{
	int n = 2;
	int m = 10;
	int k = 30;
	int i = n;

	while ( i <= k )
	{
		if ( i > m )
		{
			printf ( "%i \n", i );
		}
		i = i + n;
	}

	return 0;
}


