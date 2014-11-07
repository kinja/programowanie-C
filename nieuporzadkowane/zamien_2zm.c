#include <stdio.h>


int main ()
{
	int a = 5;
	int b = 7;

	int tmp = a;

	a = b;
	b = tmp;

	printf ( " a = %i \n b = %i \n", a, b );

	return 0;
}
