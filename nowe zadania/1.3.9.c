/*1.3.9 Napisz program kalkulator, który wykonuje wybraną przez użytkownika operacją
arytmetyczną na dwóch wczytanych liczbach. Program powinien wczytywać dane ze standardowego
wejścia i wypisywać wynik na standardowym wyjściu.*/

#include <stdio.h>
#include <math.h>

int main()
{
	printf("Jaką operację arytmetyczną chcesz wykonać? \n");

	int operacja;
	scanf("%d", &operacja);

	switch (operacja) {
		case 1:
			printf("Wybrana operacja to mnożenie.\n");
			break;
		case 2:
			printf("Wybrana operacja to dzielenie.\n");
			break;
		case 3:
			printf("Wybrana operacja to dodawanie.\n");
			break;
		case 4:
			printf("Wybrana operacja to odejmowanie.\n");
			break;
		default:
			printf ("Nie można wykonać operacji.\n");
			return 1;
	}

	int a, b;

	if (operacja == 1)
	{
		printf("Podaj liczby do wykonania operacji: \n");
		scanf("%d %d", &a, &b);
		printf("Wynik mnożenia to: %d\n", a*b);
	}
	else if (operacja == 2)
	{
		printf("Podaj liczby do wykonania operacji: \n");
		scanf("%d %d", &a, &b);
		printf("Wynik dzielenia to: %d\n", a/b);
	}
	else if (operacja == 3)
	{
		printf("Podaj liczby do wykonania operacji: \n");
		scanf("%d %d", &a, &b);
		printf("Wynik dodawania to: %d\n", a+b);
	}
	else if (operacja == 4)
	{
		printf("Podaj liczby do wykonania operacji: \n");
		scanf("%d %d", &a, &b);
		printf("Wynik odejmowania to: %d\n", a-b);
	}


	return 0;
}
