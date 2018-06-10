/*1.4.4 (r) Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę
całkowitą n i wypisuje na standardowym wyjściu liczbę n!.*/

#include <stdio.h>


int main()
{
	int n;

	scanf("%d", &n);

	int silnia = 1;
/*
	int i = 1;

	while(i<=n)
	{
		silnia = silnia * i;

		i++;
	}
*/

	for(int i = 1; i<=n; i++)
	{
		silnia = silnia * i;
	}

	printf("Wynik jest równy: %d\n", silnia);

	return 0;
}
