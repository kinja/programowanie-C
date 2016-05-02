#include <iostream>
using namespace std;

class Wektor
{
	private:
		int dane [ 10 ];

	public:
		void wypisz ()
		{
			for ( int i = 0 ; i < 10 ; i ++ )
			{
				cout << dane [ i ] << ".";
			}
			cout << endl;
		}

		void wczytaj ()
		{
			for ( int i = 0 ; i < 10 ; i ++ )
			{
				cin >> dane [ i ];
			}
		}

		void dodaj ( Wektor w )
		{
			for ( int i = 0 ; i < 10 ; i ++ )
			{
				dane [ i ] += w.dane [ i ];
			}
		}
};

int main ()
{
	Wektor w1, w2;
	w1.wczytaj ();
	w2.wczytaj ();

	w1.wypisz ();
	w2.wypisz ();

	w1.dodaj ( w2 );

	w1.wypisz ();

	return 0;
}
