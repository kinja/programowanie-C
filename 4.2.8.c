/*
	4.2.8 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
	całkowitą n, n-elementowe tablice tab1 i tab2 oraz 2*n-elementową
	tablicę tab3 o elementach typu double.
	a) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do ta-
	blicy tab3 w taki sposób, że na początku tablicy tab3 powinny się
	znaleźć elementy tablicy tab1, a po nich elementy tablicy tab2.
	b) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do ta-
	blicy tab3 w taki sposób, że w komórkach tablicy tab3 o nie-
	parzystych indeksach powinny się znaleźć elementy tablicy tab1,
	a w komórkach tablicy tab3 o parzystych indeksach elementy ta-
	blicy tab2.
*/


#include <stdio.h>

void przepisuje ( int n, int tab1[], int tab2[], int tab3[] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab3[ i ] = tab1[ i ];
	}

	for ( int i = 0 ; i < n ; i += 1 )
	{
		tab3[ n + i ] = tab2[ i ];
	}
}

void na_zmiane ( int n, int tab1[], int tab2[], int tab3[] )
{
	for ( int i = 0 ; i < 2 * n ; i += 1 )
	{
		if ( i%2 == 0 )
		{
			tab3[ i ] = tab1[ i / 2 ];
		}
		else
		{
			tab3[ i ] = tab2[ (i - 1) / 2 ];
		}
	}
}


void wyswietlanie ( int n, int tab[] )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		printf ( "%i . ", tab[ i ] );
	}

	printf ( "\n" );

}


int main ()
{
	int n;

	scanf ( "%i", &n );

	int tab1[ n ];
	int tab2[ n ];
	int tab3[ 2 * n ];

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab1[ i ] );
	}

	for ( int i = 0 ; i < n ; i += 1 )
	{
		scanf ( "%i", &tab2[ i ] );
	}

	wyswietlanie ( n, tab1 );
	wyswietlanie ( n, tab2 );
	na_zmiane ( n, tab1, tab2, tab3 );
	wyswietlanie ( 2 * n, tab3 );

	return 0;
}


