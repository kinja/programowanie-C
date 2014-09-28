#include <stdio.h>

int main()
{
	int a;
	scanf ( "%i", &a );

	int b;
	scanf ( "%i", &b );

	int c;
	scanf ( "%i", &c );

	int m;
	m = a;


	if ( b > m )
	{
		m = b;
	}

	if ( c > m )
	{
		m = c;
	}


	printf ("%i jest największe \n", m );


	return 0;
}

