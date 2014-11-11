/*
	5.2.8  Napisz funkcję, która otrzymuje w argumencie napis i podmienia
	w nim wszystkie małe litery na duże litery.
	Zakładamy, że napis przechowywany jest w tablicy o elementach ty-
	pu char, składa się wyłącznie z liter łacińskich i białych znaków,
	oraz że system ,na którym jest kompilowany i uruchamiany program,
	używa standardowego kodowania ASCII.
*/


#include <stdio.h>


void podmiana ( char* tab )
{
	for ( int i = 0 ; tab[ i ] != 0 ; i += 1 )
	{
		if ( tab[ i ] >= 'a' && tab[ i ] <= 'z' )
		{
			tab[ i ] = tab[ i ] - 'a' + 'A';
		}
	}

}


int main ()
{
	char s[] = "ALA ma Kocice";

	printf ( "%s \n", s );

	podmiana ( s );

	printf ( "%s \n", s );

	return 0;
}
