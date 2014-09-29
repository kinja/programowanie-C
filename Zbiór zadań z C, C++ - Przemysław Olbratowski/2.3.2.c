/*
	Napisz program mini znajdujący położenie najmniejszego elementu tablicy. Program powinien
	wczytywać długość tablicy, tworzyć tę tablicę w pamięci, wypełniać losowymi liczbami rzeczy-
	wistymi z przedziału od 0 do 1, a następnie wypisywć elementy tablicy wraz z indeksami oraz
	znaleziony indeks i wartość elementu najmniejszego.
*/

#include <stdio.h>

int main()
{
	int min;
	int tab[] = { 5, 6, 7, 10, 1, 2 };
	int i = 0;

	min = tab[0];


	while ( i < sizeof(tab) / sizeof(int) )
	{
		if ( tab[i] < min )
		{
			min = tab[i];
		}

		i += 1;
	}

	printf ( "min = %i \n", min );

	return 0;
}

