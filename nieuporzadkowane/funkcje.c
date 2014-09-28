#include <stdio.h>

int bezwzgledna ( int liczba )
{
	if ( liczba < 0 )
	{
		liczba = -liczba;
	}

	return liczba;
}


int main()
{
	printf ( "%i \n", bezwzgledna(5) );
	printf ( "%i \n", bezwzgledna(-1) );

	return 0;
}

