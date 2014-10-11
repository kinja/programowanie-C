/*
	1.4.3 Napisz program wczytujący ze standardowego wejścia trzy dodatnie
	liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
	wielokrotności n większe od m i mniejsze od k
*/


#include <stdio.h>

int main()
{
	int n = 2;
	int m = 8;
	int k = 30;

	for ( int i = 1 ; i <= m ; i += 1 )
	{
		printf ( "%i \n", i );
	}
	return 0;
}

