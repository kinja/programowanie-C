/*
	1.4.2 Napisz program wczytujący ze standardowego wejścia dwie dodat-
	nie liczby całkowite n i m, i wypisujący na standardowym wyjściu
	m pierwszych wielokrotności liczby n.
*/


#include <stdio.h>

int main()
{
	int n = 2;
	int m = 5;
	int i = n;

	while ( m > 0 )
	{
		printf ( "%i \n", i );
		m = m - 1;
		i = i + n;
	}


	return 0;
}

