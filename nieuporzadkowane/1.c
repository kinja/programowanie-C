#include <stdio.h>

int main()
{
	int a;
	scanf( "%i", &a );

	if( a < 0 )
	{
		printf("ujemna \n");
	}
	else
	{
		printf("nieujemna \n");
	}

	printf("%i \n", a );
	return 0;
}

