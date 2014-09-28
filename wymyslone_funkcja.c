/*
	Napis funckje `suma`, która przyjmuje 3 arg - wskazniki na int.
	Funkcja ma "wpisać" w zmienna wskazywana przez 3ci argument sume 

*/

#include <stdio.h>

void suma ( int* a, int* b, int* s )
{
	*s = *a + *b;
}

int main()
{
	int a = 5;
	int b = 20;
	int s = 0;

	suma ( &a, &b, &s );

	printf ( "%i \n", s );

	return 0;
}

