#include <stdio.h>

int main()
{
	int a;
	scanf ( "%i", &a );

	int b;
	scanf ( "%i", &b );

	int c;
	scanf ( "%i", &c );

	if (a < c && b < c)
	{
		printf ("c jest największe %i \n", c);
	}
	else if (c < b && a < b)
	{
		printf ("b jest największe %i \n", b);
	}
	else if (b < a && c < a)
	{
		printf ("a jest największe %i \n", a);
	}



	return 0;
}

