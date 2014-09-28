#include <stdio.h>

int main()
{
	int pierwsza, druga;
	int bezwzgledna_pierwsza, bezwzgledna_druga;


	scanf ( "%i %i", &pierwsza, &druga );


	bezwzgledna_pierwsza = pierwsza;
	if ( pierwsza < 0 )
	{
		bezwzgledna_pierwsza = -pierwsza;
	}

	bezwzgledna_druga = druga;
	if ( druga < 0 )
	{
		bezwzgledna_druga = -druga;
	}


	if ( bezwzgledna_pierwsza > bezwzgledna_druga )
	{
		printf ( "%i \n", pierwsza );
	}
	else
	{
		printf ( "%i \n", druga );
	}


	return 0;
}
