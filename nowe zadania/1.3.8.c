/*1.3.8 (r) Napisz program, który w zależności od wyboru użytkownika wczytuje
ze standardowego wejścia wymiary: kwadratu, prostokąta lub trójkąta
i wypisuje na standardowym wyjściu pole figury o wczytanychwymiarach.*/

#include <stdio.h>
#include <math.h>

int main()
{
	// 1 - wyswietenie komunikatu dla uzytkownika
	printf("Pole jakiej figury policzyć kwadrtu, prostokąta czy trójkąta? \n");


	// 2 - wczytanie "decyzji" uzytkownika
	int figura;
	scanf ("%d", &figura);


	// 3 - wyswietenie "decyzji" uzytkownika
	switch (figura) {
		case 1:
			printf("Wybrana figura to kwadrat.\n");
			break;
		case 2:
			printf("Wybrana figura to prostokąt.\n");
			break;
		case 3:
			printf("Wybrana figura to trójkąt.\n");
			break;
		default:
			printf ("Nie ma takiej figury.\n");
			return 1;
	}

	int a, b;

	if (figura == 1)
	{
		printf("Długość boku kwadratu: \n");
		scanf("%d", &a);
		printf("Pole kwadratu wynosi: %d\n", a*a);
	}
	else if (figura == 2)
	{
		printf("Długość boków prostokąta: \n");
		scanf("%d %d", &a, &b);
		printf("Pole prostokąta wynosi: %d\n", a*b);
	}
	else if (figura == 3)
	{
		printf("Długość podstawy i wysokości trójkąta: \n");
		scanf("%d %d", &a, &b);
		printf("Pole trójkąta wynosi: %.1f\n", 0.5*a*b);
	}


	return 0;
}
