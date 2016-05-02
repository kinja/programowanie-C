#include <iostream>
using namespace std;

class Poczta
{
	public:
		string nadawca;
		string odbiorca;
		string temat;
		string tresc;

};

void wypisz ( Poczta k )
{
	cout << "Nadawca:" << endl;
	cin >> k.nadawca;
	cout << "Odbiorca:" << endl;
	cin >> k.odbiorca;
	cout << "Teamt:" << endl;
	cin >> k.temat;
	cout << "Treść:" << endl;
	cin >> k.tresc;
}

int main ()
{
	Poczta o;

	wypisz ( o );

	return 0;
}
