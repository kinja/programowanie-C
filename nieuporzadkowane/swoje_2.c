#include <stdio.h>

int main()
{
	int n;
	scanf ( "%i", &n );
	int tab[ n ];
	int suma = 0;

	for ( int i = 0 ; i<n ; i++ )
	{
		scanf ( "%i", &tab[i] );
		suma += tab[i] * tab[i];
	}

	printf ( "%i \n", suma );

	return 0;
}

