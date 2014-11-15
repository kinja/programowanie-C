/*
	5.2.25  Napisz funkcję kopiuj, która dostaje jako argumenty napis oraz wskaź-
	nik do napisu (czyli wskaźnik do wskaźnika), tworzy nową tablicę zna-
	ków, kopiuje do niej napis zawarty w pierwszym argumencie, i przy-
	pisuje wskaźnik do nowo utworzonej tablicy do zmiennej wskazywanej
	przez drugi argument.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void kopiuj ( char* napis, char** wsk )
{
	int rozmiar = strlen ( napis );


	char* nova;

	nova = malloc ( rozmiar + 1 );

	for ( int i = 0 ; i < rozmiar + 1 ; i += 1 )
	{
		nova[ i ] = napis[ i ];
	}

	*wsk = nova;
}



int main ()
{
	char* xx = "Ala";
	char* nap;

	kopiuj(xx, &nap);

	printf ( "%s \n", nap );

	return 0;
}
