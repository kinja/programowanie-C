#include <stdio.h>

int main()
{
	int x;
	scanf ( "%i", &x );
	int y = x;
	if ( y < 0)
	{
		y = -y;
	}
	printf ( "wartość bezwzględna z %i, jest równa: %i \n ", x, y);
	return 0;
}

