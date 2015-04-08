#include <iostream>
using namespace std;

class Funkcja
{
	public:
		double a;
		double b;

	double wartosc ( double x)
	{
		return a * x + b;
	}
};

int main ()
{
	Funkcja f;
	double d;

	cin >> f.a;
	cin >> f.b;
	cin >> d;

	cout << f.wartosc ( d ) << endl;

	return 0;
}
