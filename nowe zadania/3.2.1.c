/*3.2.1 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
zmiennych typu int, która zwraca jako wartość mniejszą z liczb wskazywanych przez argumenty.*/

#include <stdio.h>

int fun(int* n, int* m)
{

	if(*n <= *m)
	{
		return *n;
	}
	else
	{
		return *m;
	}

}


int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("Mniejsza wartość to: %d\n", fun(&x, &y));

	return 0;
}
