#include <stdio.h>


int wczytaj ()
{
	int tmp;
	static int suma = 0;

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

