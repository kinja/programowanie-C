/*1.4.1 (r,!) Napisz program wczytujący ze standardowego wejścia dwie dodatnie liczby
całkowite n i m, i wypisujący w kolejnych wierszach na standardowym wyjściu wszystkie
dodatnie wielokrotności n mniejsze od m.*/

#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d %d", &n, &m);

	for(int i = 1; ; i++)
	{
		int w = i * n;

		if (w >= m)
		{
			break;
		}

		printf("%d\n", w);
	}

	return 0;
}
