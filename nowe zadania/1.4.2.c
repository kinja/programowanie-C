/*1.4.2 Napisz program wczytujący ze standardowego wejścia dwie dodatnie liczby 
całkowite n i m, i wypisujący na standardowym wyjściu m pierwszych wielokrotności liczby n.*/

#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d %d", &n, &m);

	for(int i = 1; i<=m; i++)
	{
		int w = i * n;

		printf("%d\n", w);
	}

	return 0;
}
