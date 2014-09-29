#include <stdio.h>

int najmniejszy_w_tablicy ( int* tab, int n )
{
	int min;
	int i = 0;

	min = tab[0];

	while ( i < n )
	{
		if ( tab[i] < min )
		{
			min = tab[i];
		}

		i += 1;
	}


	return min;
}


int main()
{
	int tab[] = { 5, 6, 7, 10, 1, 2 };
	int wynik = najmniejszy_w_tablicy ( tab, sizeof(tab) / sizeof(int) );

	printf ( "min = %i \n", wynik );

	return 0;
}
