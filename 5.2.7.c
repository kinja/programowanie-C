/*
	5.2.7  (r) Napisz funkcję sklej otrzymującą jako argumenty trzy tablice
	znaków i zapisującą do trzeciej tablicy konkatenację napisów znajdu-
	jących się w dwóch pierwszych tablicach (czyli dla napisów ”Ala m”
	i ”a kota” znajdujących się w pierwszych dwóch argumentach do trze-
	ciej tablicy powinien zostać zapisany napis ”Ala ma kota”). Zakłada-
	my, że w trzeciej tablicy jest wystarczająco dużo miejsca.
	Napisz dwie wersje funkcji sklej dla napisów składających się ze zna-
	ków typu char i wchar_t.
*/


#include <stdio.h>


void sklej ( char* tab1, char* tab2, char* tab3 )
{
	 int i;

	for ( i = 0 ; tab1[ i ] != 0 ; i += 1 )
	{
		tab3[ i ] = tab1[ i ];
	}

	for ( int j = 0 ; tab2[ j ] != 0 ; j += 1 )
	{
		tab3[ i ] = tab2[ j ];

		i += 1;
	}

	tab3[ i ] = 0;

}



int main (  )
{
	char tab1 [] = "Ala m";
	char tab2 [] = "a kota";
	char tab3 [ 12 ];

	sklej ( tab1, tab2, tab3 );
	printf ( "%s \n", tab3 );

	return 0;
}
