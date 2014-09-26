#include <stdio.h>

enum dni
{
	PONIEDZIALEK = 1,
	WTOREK,
	SRODA,
	CZWARTEK,
	PIATEK,
	SOBOTA,
	NIEDIELA
};


enum dni dzien;


int main()
{
	dzien = SRODA;
	printf ( "%i \n", sizeof (int) );
	printf ( "%i \n", sizeof (double) );
	return 0;
}

