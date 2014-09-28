#include <stdio.h>

int silnia ( int n )
{
	int wynik = 1;
	for ( int i=1 ; i<=n ; i+=1 )
	{
		wynik = wynik * i;
	}
	return wynik;
}


int main()
{
	printf ( "%i \n", silnia (4) );

	return 0;
}

