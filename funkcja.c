#include <stdio.h>

int minmax ( int* a, int* b, int* mniejsza )
{
	if ( *a < *b )
	{
		*mniejsza = *a;
		return *b;
	}
	else
	{
		*mniejsza = *b;
		return *a;
	}
}

int main()
{
	int a = 52;
	int b = 20;

	int mniejsza;
	int wieksza;

	wieksza = minmax ( &a, &b, &mniejsza );

	printf ( "mniejsza: %i \n", mniejsza );
	printf ( "wieksza: %i \n", wieksza );

	return 0;
}
