#include <stdio.h>

int main()
{
	int n;
	scanf ( "%i", &n );
	int suma = 0;

	for ( int i=0 ; i<=n ; i+=1 )
	{
		suma += i * i;
	}
	printf ( "%i \n", suma );
	return 0;
}

