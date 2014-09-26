#include <stdio.h>

int silnia ( int n )
{
	if ( n <= 1 )
	{
		return n;
	}

	return n * silnia (n - 1);
}



int main()
{
	printf ( "%i \n", silnia (5) );


	return 0;
}

