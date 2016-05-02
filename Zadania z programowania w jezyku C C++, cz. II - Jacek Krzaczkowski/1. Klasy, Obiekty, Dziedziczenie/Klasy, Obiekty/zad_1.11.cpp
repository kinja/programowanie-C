#include <iostream>
using namespace std;

class Trojkat
{
	public:
		double wysokosc;
		double podstawa;

	double wczytaj ()
	{
		cout << "Wysokość: ";
		cin >> wysokosc;

		cout << "Podstawa: ";
		cin >> podstawa;
	}

	double pole ()
	{
		return wysokosc * podstawa * 0.5;
	}
};

void wypisz_wiekszy ( Trojkat* tab, int n )
{
	Trojkat u = tab [ 0 ];

	for ( int i = 1 ; i < n ; i++)
	{
		if ( u.pole () < tab [ i ].pole () )
		{
			u = tab [ i ];
		}
	}
	cout << "Trójkąk Wys = " << u.wysokosc << " Podstawa = " << u.podstawa << endl;
}

int main ()
{
	Trojkat d [ 3 ];

	for ( int i = 0 ; i < 3 ; i++ )
	{
		d [ i ].wczytaj();
	}

	wypisz_wiekszy ( d, 3 );

	return 0;
}
