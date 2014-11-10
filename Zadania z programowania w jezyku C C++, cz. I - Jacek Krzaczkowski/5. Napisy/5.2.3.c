/*
	5.2.3 Napisz funkcję porównaj, która jako argumenty otrzymuje dwa napisy
	i zwraca 1 gdy napisy są równe i 0 w przeciwnym przypadku. Napisz
	dwie wersje funkcji porownaj dla napisów składających się ze znaków
	typu char i wchar_t.
*/


#include <stdio.h>


int porownaj ( char* str_1, char* str_2 )
{
	int i;

	for ( i = 0 ; str_1[ i ] != 0 && str_2[ i ] != 0 ; i += 1 )
	{
		if ( str_1[ i ] != str_2[ i ] )
		{
			return 0;
		}
	}

	if ( str_1[ i ] == str_2[ i ] )
	{
		return 1;
	}

	return 0;
}



int main ()
{
	printf ( "%i \n", porownaj( "Ala", "Ola" ) );

	printf ( "%i \n", porownaj( "Ala", "Ala" ) );

	printf ( "%i \n", porownaj( "Kasia", "Ola" ) );

	return 0;
}
