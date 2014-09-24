#include <stdio.h>

int main()
{
	int pierwsza, druga;
	scanf ( "%i %i", &pierwsza, &druga );

	int bezwzgledna_pierwsza, bezwzgledna_druga;
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
	printf ( "zmienna pierwsza = %i \n", pierwsza );
	printf ( "zmienna druga = %i \n", druga );
	printf ( "zmienna bezwzgledna_pierwsza = %i \n", bezwzgledna_pierwsza );
	printf ( "zmienna bezwzgledna_druga = %i \n", bezwzgledna_druga );

	if ( bezwzgledna_pierwsza > bezwzgledna_druga )
	{
		printf ( "wynik: %i \n", pierwsza );
	}
	else
	{
		printf ( "wynik: %i \n", druga );
	}
	return 0;
}
