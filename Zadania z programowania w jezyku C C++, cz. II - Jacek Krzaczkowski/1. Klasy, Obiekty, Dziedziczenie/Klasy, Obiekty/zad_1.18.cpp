#include <iostream>
using namespace std;

class Punkt3
{
	private:
		double x;
		double y;
		double z;
	public:
		void wczytaj ()
		{
				cin >> x;
				cin >> y;
				cin >> z;
		}

		void wypisz ()
		{
			cout << "(" << x << "," << y << "," << z << ")" << endl;
		}
};

int main ()
{
	Punkt3 p;

	p.wczytaj ();
	p.wypisz ();

	return 0;
}
