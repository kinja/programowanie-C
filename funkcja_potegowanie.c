#include <stdio.h>

int potega ( int n, int m )
{
	int wynik = 1;
	for ( int i=0 ; i<m ; i+=1 )
	{
		wynik = wynik * n;
	}

	return wynik;
}

int main()
{
	printf ( "%i \n", potega (4,3) );

	return 0;
}

