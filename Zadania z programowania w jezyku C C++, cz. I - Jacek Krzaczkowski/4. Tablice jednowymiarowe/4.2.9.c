/*
	4.2.9 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
	całkowitą n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o ele-
	mentach typu int i zamienia zawartości komórek otrzymanych w ar-
	gumentach tablic w następujący sposób:
	— dla dowolnego i komórka tab1[i] powinna zawierać największą
	spośród pierwotnych wartości komórek tab1[i], tab2[i]
	oraz tab3[i],
	— dla dowolnego i komórka tab2[i] powinna zawierać drugą
	co do wielkości spośród pierwotnych wartości komórek tab1[i],
	tab2[i] oraz tab3[i],
	— dla dowolnego i komórka tab3[i] powinna zawierać najmniejszą
	spośród pierwotnych wartości komórek tab1[i], tab2[i]
	oraz tab3[i].
*/


#include <stdio.h>

void fun ( int n, int tab1[], int tab2[], int tab3[] )
{
	for ( int i = 0 ; i < n ; i +=1 )
	{
		int a, b, c;
		int tmp;

		a = tab1[i];
		b = tab2[i];
		c = tab3[i];

		if ( a > b )
		{
			tmp = a;
			a = b;
			b = tmp;
		}

		if ( b > c )
		{
			tmp = b;
			b = c;
			c = tmp;
		}

		if ( a > b )
		{
			tmp = a;
			a = b;
			b = tmp;
		}

		tab1[i] = c;
		tab2[i] = b;
		tab3[i] = a;
	}
}


void wyswietl ( int* tab, int n )
{
	for ( int i = 0 ; i < n ; i += 1 )
	{
		printf ( "%i ", tab[ i ] );
	}

	printf ( "\n" );
}


int main ()
{
	int tab1[ 5 ] = { 1, 2, 3, 4, 5 };
	int tab2[ 5 ] = { 7, 1, 8, 2, 4 };
	int tab3[ 5 ] = { 5, 9, 11, 4, 8 };

	wyswietl ( tab1, 5 );
	wyswietl ( tab2, 5 );
	wyswietl ( tab3, 5 );

	fun ( 5, tab1, tab2, tab3 );

	printf ( "------\n" );

	wyswietl ( tab1, 5 );
	wyswietl ( tab2, 5 );
	wyswietl ( tab3, 5 );


	return 0;
}
