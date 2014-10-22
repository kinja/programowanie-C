/*
	2.2.25 (*) Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie
	nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie n
	ciągu zdefiniowanego w następujący sposób
	a 0 = a 1 = 1
	a n = a n−1 + n dla n parzystych
	a n = a n−1 ∗ n dla n nieparzystych.
*/



#include <stdio.h>

int rek ( int n )
{
	if ( n == 0 || n == 1 )
	{
		return 1;
	}

	if ( n % 2 == 0 )
	{
		return rek( n - 1 ) + n;
	}
	else if ( n % 2 == 1 )
	{
		return rek( n - 1 ) * n;
	}

}


int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "%i \n", rek( n ) );

	return 0;
}

