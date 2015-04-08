#include <iostream>
using namespace std;

class Liczba
{
	private:
		int g;

	public:
		void wczytaj ()
		{
			cin >> g;
		}

		void wypisz ()
		{
			cout << g << endl;
		}

		void nadaj_w ( int x )
		{
			g = x;
		}

		int wartosc (  )
		{
			return g;
		}

		int abs ()
		{
			if ( g < 0 )
			{
				return -g;
			}
			else
			{
				return g;
			}
		}
};

int main ()
{
	Liczba l;

	l.nadaj_w ( 5 );
	l.wypisz ();
	l.wczytaj ();

	cout << l.abs () << endl;

	return 0;
}
