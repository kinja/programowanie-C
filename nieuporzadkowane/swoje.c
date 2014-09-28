#include <stdio.h>

int main()
{
	int x, y;
	scanf ( "%i %i", &x, &y);

	if ( x >= y )
	{
		printf ( "złe liczby \n" );
		return 0;
	}

	for ( int i=x ; i<=y ; i+=1 )
	{
		printf ( "%i \n", i );
	}
	return 0;
}

