/*
	2.2.23 (r,!) Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argu-
	mencie nieujemnej liczby całkowitej n wartość elementu ciągu Fibo-
	nacciego o indeksie n.
*/



#include <stdio.h>

int fibonacci ( int n )
{
	if ( n == 0 )
	{
		return 0;
	}
	else if ( n == 1 )
	{
		return 1;
	}

	return fibonacci( n - 1 ) + fibonacci( n - 2 );
}


int main()
{
	int n;

	scanf ( "%i", &n );

	printf ( "%i \n", fibonacci( n ) );

	return 0;
}

