#include <iostream>
using namespace std;

class FunkcjaKw
{
	public:
		double a;
		double b;
		double c;

	double wartosc ( double x )
	{
		return a * x * x + b * x + c;
	}

	bool zero ()
	{
		double delta = b * b - 4 * a * c;

		if ( delta >= 0 )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main ()
{
	FunkcjaKw s;

	cin >> s.a;
	cin >> s.b;
	cin >> s.c;

	cout << "zero: " << s.zero () << endl;

	double t;
	cin >> t;
	cout << s.wartosc ( t ) << endl;

	return 0;
}
