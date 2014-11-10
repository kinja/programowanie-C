/*
	5.2.4 (r,!) Napisz funkcję, która jako argumenty otrzymuje dwa napisy
	i zwraca wartość 1, gdy pierwszy napis jest wcześniejszy w kolejności
	leksykograficznej i 0 w przeciwnym przypadku.
	Zakładamy, że oba napisy składają się ze znaków typu char, zawierają
	wyłącznie małe litery alfabetu łacińskiego, a system, na którym jest
	kompilowany i uruchamiany program, używa standardowego kodowa-
	nia ASCII.
*/


#include <stdio.h>


int leksykograficzna ( char* str_1, char* str_2 )
{
	int i;

	for ( i = 0 ; str_1[ i ] != 0 && str_2[ i ] != 0 ; i += 1 )
	{
		if ( str_1[ i ] < str_2[ i ] )
		{
			return 1;
		}
	}

	if ( str_1[ i ] == 0 && str_2[ i ] != 0)
	{
		return 1;
	}

	return 0;
}


int main ()
{
	printf ( "%i \n", leksykograficzna( "ala", "bolek" ) );

	printf ( "%i \n", leksykograficzna( "aaaaa", "aaaaah" ) );

	return 0;
}
