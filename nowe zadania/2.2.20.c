/*2.2.20 (r,!) Napisz rekurencyjną funkcję, która dla otrzymanej w argumencie
nieujemnej całkowitej liczby n zwraca jako wartość n!.*/

#include <stdio.h>

int silnia(int n)
{
	printf("uruchamiam silnia(%d)\n", n);

	if(n<2)
	{
		printf("licze silnia(1)\n");
		return 1;
	}

	printf("licze silnia(%d) * %d\n", n-1,n);

	return silnia(n-1) * n;
}


int main()
{
	int k;

	scanf("%d", &k);

	printf("Wynik to: %d\n", silnia(k));


	return 0;
}
