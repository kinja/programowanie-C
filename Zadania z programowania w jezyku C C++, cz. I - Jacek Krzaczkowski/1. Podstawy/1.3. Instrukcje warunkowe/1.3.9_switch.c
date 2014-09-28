#include <stdio.h>

int main()
{
	char op;
	int x, y;

	scanf ( "%c %i %i", &op, &x, &y );

	printf ( "op : %c\n", op );
	printf ( "x : %i\n", x );
	printf ( "y : %i\n", y );

	switch ( op )
	{
		case '+':
			printf ( "suma = %i\n", x + y );
			break;

		case '-':
			printf ( "różnica = %i\n", x - y );
			break;

		case '*':
			printf ( "iloraz = %i\n", x * y );
			break;

		default:
			printf ( "Nieznany operator \n" );
	}

	return 0;
}

