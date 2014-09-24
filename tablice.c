#include <stdio.h>

int main()
{
	int n;
	printf ( "ile liczb: ");
	scanf ( "%i", &n );
	int tab[ n ];

	for ( int i = 0 ; i<n ; i++ )
	{
		printf ( "podaj liczbę %i: ", i );
		scanf ( "%i", &tab[i] );
	}

	int suma;
	suma = 0;

	for ( int i = 0 ; i<n ; i++ )
	{
		suma = suma + tab[i];
	}

	printf ( "suma = %i \n", suma );

	return 0;
}

