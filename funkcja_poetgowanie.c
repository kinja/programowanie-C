#include <stdio.h>

int potegowanie ( int n )
{
	int wynik = 1;

	for ( int i=0 ; i<n ; i+=1 )
	{
		wynik = wynik * 2;
	}

	return wynik;
}

int main()
{

	printf ( "%i \n", potegowanie (5) );
	return 0;
}

