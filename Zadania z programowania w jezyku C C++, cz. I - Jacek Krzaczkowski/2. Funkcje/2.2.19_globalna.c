#include <stdio.h>


int suma = 0;

int wczytaj ()
{
	int tmp;

	scanf ( "%i", &tmp );

	suma = suma + tmp;
	printf ( "dodałem %i teraz mam %i \n", tmp, suma );

	return tmp;
}


int main()
{
	printf ( "%i \n", wczytaj() );
	printf ( "%i \n", wczytaj() );

	return 0;
}

