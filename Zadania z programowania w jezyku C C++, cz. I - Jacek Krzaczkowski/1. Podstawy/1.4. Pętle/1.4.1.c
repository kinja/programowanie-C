/*
	1.4.1 (r,!) Napisz program wczytujący ze standardowego wejścia dwie do-
	datnie liczby całkowite n i m, i wypisujący w kolejnych wierszach
	na standardowym wyjściu wszystkie dodatnie wielokrotności n mniej-
	sze od m.
*/

#include <stdio.h>

int main()
{
	int n = 4;
	int m = 30;
	int i = n;

	while ( i <= m )
	{
		printf ( "%i \n", i );
		i = i + n;
	}
	return 0;
}

