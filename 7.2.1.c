/*
	7.2.1 (r,róż) Zdefiniuj strukturę trojkat przechowującą długości boków
	trójkąta. Napisz funkcję, która otrzymuje jako argument zmienną typu
	struct trojkat, i zwraca jako wartość obwód trójkąta przekazanego
	w argumencie.
*/

#include <stdio.h>
#include <stdlib.h>


struct trojkat
{
	int a;
	int b;
	int c;
};


int obwod ( struct trojkat t )
{
	return t.a + t.b + t.c;
}




int main ()
{
	struct trojkat moj;

	scanf ( "%i %i %i", &moj.a, &moj.b, &moj.c );

	printf ( "%i \n", obwod(moj) );

	return 0;
}

