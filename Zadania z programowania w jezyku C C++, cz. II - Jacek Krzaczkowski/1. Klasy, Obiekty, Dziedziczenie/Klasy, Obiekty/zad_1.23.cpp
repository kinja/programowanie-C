#include <iostream>
using namespace std;

class DaneOs
{
	private:
		string imie;
		string nazwisko;
		string adres;

	void wypisz ()
	{
		cout << "Imię: ";
		cin >> imie;

		cout << "Nazwisko: ";
		cin >> nazwisko;

		cout << "Adres: ";
		cin >> adres;
	}
};


int main ()
{
	return 0;
}
