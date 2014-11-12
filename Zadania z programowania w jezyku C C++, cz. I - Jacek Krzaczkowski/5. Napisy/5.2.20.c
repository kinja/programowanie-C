/*
	5.2.20  Napisz funkcję godzina, która dostaje w argumentach trzy liczby
	całkowite godz, min i sek, zawierające odpowiednio godziny, minuty
	oraz sekundy, i zwraca jako wartość napis zawierający godzinę w for-
	macie godz:min:sek, w którym wartości poszczególnych pól pochodzą
	ze zmiennych podanych w argumentach.
*/



#include <stdio.h>
#include <stdlib.h>


char* godzina ( int godz, int min, int sek )
{
	char* napis = malloc( 9 );

	napis[ 0 ] = godz / 10 + '0';
	napis[ 1 ] = godz % 10 + 48;
	napis[ 2 ] = 58;
	napis[ 3 ] = min / 10 + '0';
	napis[ 4 ] = min % 10 + 48;
	napis[ 5 ] = 58;
	napis[ 6 ] = sek / 10 + '0';
	napis[ 7 ] = sek % 10 + 48;
	napis[ 8 ] = 0;

	return napis;
}




int main ()
{

	printf ( "%s \n", godzina( 20, 51, 57 ) );
	printf ( "%s \n", godzina( 13, 14, 15 ) );
	printf ( "%s \n", godzina( 2, 0, 0 ) );

	return 0;
}
