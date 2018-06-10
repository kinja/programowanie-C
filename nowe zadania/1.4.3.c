/*1.4.3 Napisz program wczytujący ze standardowego wejścia trzy dodatnie
liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
wielokrotności n większe od m i mniejsze od k.*/

#include <stdio.h>

int main()
{
	int liczba, poczatek, koniec;

	scanf("%d %d %d", &liczba, &poczatek, &koniec);

	printf("liczba %d\n", liczba);
	printf("poczatek %d\n", poczatek);
	printf("koniec %d\n", koniec);

	int wielokrotnosc = liczba;


	while (wielokrotnosc < poczatek) 
	{
		wielokrotnosc += liczba;
	}

	while (wielokrotnosc < koniec) 
	{
		printf("-> %d\n", wielokrotnosc);
		wielokrotnosc = wielokrotnosc + liczba;
	}

	return 0;
}
