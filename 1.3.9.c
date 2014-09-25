#include <stdio.h>

int main()
{
	char op;
	int x, y;

	scanf ( "%c %i %i", &op, &x, &y );

	printf ( "op : %c\n", op );
	printf ( "x : %i\n", x );
	printf ( "y : %i\n", y );

	if ( op == '+' )
	{
		printf ( "suma = %i\n", x + y );
	}
	else if ( op == '-' )
	{
		printf ( "różnica = %i\n", x - y );
	}
	else if ( op == '*' )
	{
		printf ( "iloraz = %i\n", x * y );
	}
	else
	{
		printf ( "Nieznany operator \n" );
	}
	return 0;
}

