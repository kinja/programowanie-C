#include <stdio.h>


int wczytaj ( )
{
	int x;
	static int suma = 0;

	scanf ( "%i", &x );

	suma = suma + x;
	printf ( "dodałem %i teraz mam %i \n", x, suma );

	return x;
}


int main()
{
	printf ( "%i \n", wczytaj( ) );
	printf ( "%i \n", wczytaj( ) );

	return 0;
}

