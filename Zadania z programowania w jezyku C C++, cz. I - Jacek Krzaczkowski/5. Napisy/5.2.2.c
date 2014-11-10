/*
	5.2.2 (r) Napisz funkcję dlugosc, która jako argument otrzymuje napis
	i zwraca jako wartość jego długość. Napisz dwie wersje funkcji dlugosc
	dla napisów składających się ze znaków typu char i wchar_t.
*/


#include <stdio.h>


int dlugosc ( char* napis )
{
	for ( int i = 0 ;  ; i += 1 )
	{
		if ( napis[ i ] == 0 )
		{
			return i;
		}
	}

	return 0;
}



int main ()
{
	printf ( "%i \n", dlugosc( "Kinja" ) );

	return 0;
}
