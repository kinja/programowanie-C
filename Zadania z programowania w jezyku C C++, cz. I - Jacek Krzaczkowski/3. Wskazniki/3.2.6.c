/*
	3.2.6 Napisz funkcję, której argumentami są n typu int oraz w wskaźnik
	do int, która przepisuje wartość n do zmiennej wskazywanej przez w.
*/


#include <stdio.h>

void przepisz ( int n, int* w )
{
	*w = n;
}

int main()
{
	int a;

	przepisz ( 5, &a );

	printf ( "%i \n", a );

	return 0;
}

