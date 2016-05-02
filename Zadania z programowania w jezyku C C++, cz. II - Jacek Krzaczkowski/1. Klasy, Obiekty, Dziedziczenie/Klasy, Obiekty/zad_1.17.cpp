#include <iostream>
using namespace std;

class Punkt
{
private:
	double x;
	double y;

public:
	void wczytaj ()
	{
		cin >> x;
		cin >> y;
	}

	void wyswietl ()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main ()
{
	Punkt p;

	p.wczytaj ();
	p.wyswietl ();

	return 0;
}
