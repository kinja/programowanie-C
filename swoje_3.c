#include <stdio.h>

int main()
{
	int n;
	scanf ( "%i", &n );
	int tab[n];
	int suma = 0;

	for ( int i=0 ; i<n ; i+=1 )
	{
		scanf ( "%i", &tab[i] );
	}


	printf ( "kutasik \n" );


	for ( int i=0 ; i<n ; i+=1 )
	{
		if ( tab[i] < 0 )
		{
			printf ( "%i \n", tab[i] );
		}
		else if ( tab[i] == 0 )
		{
			printf ( "Zero \n" );
		}
		else if ( tab[i] > 0 )
		{
			suma = suma + tab[i];
		}
	}

	printf ( "Suma %i \n", suma );

	return 0;
}

