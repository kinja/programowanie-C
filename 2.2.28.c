/*
	2.2.28 Napisz funkcję rekurencyjną, która dla otrzymanej w argumentach
	pary nieujemnych liczb całkowitych n i m zwraca wartość f (n, m)
	gdzie funkcja f jest zdefiniowana w następujący sposób:
	f (n, 0) = n
	f (n, m) = f (m, n)
	f (n, m) = n − m + f (n − 1, m) + f (n, m − 1) dla n ≥ m > 0.
*/


#include <stdio.h>


int rek ( int n, int m )
{
	if ( m == 0 )
	{
		return n;
	}

	if ( n >= m )
	{
		return n - m + rek ( n - 1, m ) + rek ( n, m - 1 );
	}

	return rek ( m, n );

}


int main()
{
	int n, m;

	scanf ( "%i %i", &n, &m );

	printf ( "%i \n", rek( n , m ) );

	return 0;
}


