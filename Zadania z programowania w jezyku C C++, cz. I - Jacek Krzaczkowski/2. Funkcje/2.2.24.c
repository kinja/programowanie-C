/*
	2.2.24 (*) Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argu-
	mencie nieujemnej liczby całkowitej n wartość elementu o indeksie n
	ciągu zdefiniowanego w następujący sposób
	a 0 = a 1 = 1
	a n = a 0 + a 1 + ... + a n−1 dla n > 1
*/


#include <stdio.h>


int rek ( int n )
{
	if ( n == 0 || n == 1 )
	{
		return 1;
	}

	int suma = 0;

	for ( int i = 0 ; i < n ; i += 1 )
	{
		suma = suma + rek( i );
	}

	return suma;

}

int main()
{
	int i;

	scanf ( "%i", &i );

	printf ( "%i \n", rek(i) );

	return 0;
}

