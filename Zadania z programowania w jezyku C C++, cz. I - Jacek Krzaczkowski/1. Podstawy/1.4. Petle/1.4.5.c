#include <stdio.h>

int main()
{
	int n;
	int suma = 0;

	scanf ( "%i", &n );

	for ( int i=1 ; i<=n ; i+=1 )
	{
		suma += i * i;
	}

	printf ( "%i \n", suma );

	return 0;
}

