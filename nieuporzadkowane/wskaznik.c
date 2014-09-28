#include <stdio.h>

int main()
{
	int a = 5;
	int b = 10;
	int* wsk = &b;

	*wsk += 6;
	printf ( "%i %i \n", a, b );


	return 0;
}

