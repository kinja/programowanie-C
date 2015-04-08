#include <iostream>
using namespace std;

class UkrytaLiczba
{
	private:
	  double liczba;

	public:
	  double zeruj()
	  {
		liczba = 0;
	  }

	void wyswietl ()
	{
		cout << liczba << endl;
	}

	friend void inkrementuj ( UkrytaLiczba & x );
};

void inkrementuj ( UkrytaLiczba & x )
{
	x.liczba += 1;
}

int main ()
{
   UkrytaLiczba t;
   t.zeruj ();

	t.wyswietl ();
	inkrementuj ( t );
	t.wyswietl ();
   return 0;
}
