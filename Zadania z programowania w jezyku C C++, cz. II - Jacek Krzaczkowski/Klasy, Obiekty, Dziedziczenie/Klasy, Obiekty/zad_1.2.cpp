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

int main ()
{
	Trojkat d;

	d.wczytaj();
	cout << d.pole() << endl;

	return 0;
}
