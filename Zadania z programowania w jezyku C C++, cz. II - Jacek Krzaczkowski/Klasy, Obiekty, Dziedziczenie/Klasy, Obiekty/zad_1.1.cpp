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

class Ksiazka
{
	public:
		string tytul;
		string autor;
};

void wczytaj ( Ksiazka & d)
{
	cout << "Tytuł: ";
	cin >> d.tytul;

	cout << "Autor: ";
	cin >> d.autor;
}

void wypisz ( Ksiazka & d )
{
	cout << "<Tytuł='" << d.tytul << "'" << endl
		 << " Autor='" << d.autor << "'>" << endl;
}

void wczytaj ( Poczta & w )
{
	cout << "Nadawca: ";
	cin >> w.nadawca;

	cout << "Odbiorca: ";
	cin >> w.odbiorca;

	cout << "Temat: ";
	cin >> w.temat;

	cout << "Tresc: ";
	cin >> w.tresc;
}

void wypisz ( Poczta w )
{
	cout << "<Poczta nadawca='" << w.nadawca << "'" << endl
		 << " odbiorca='" << w.odbiorca << "'" << endl
		 << " temat='" << w.temat << "'" << endl
		 << " tresc='" << w.tresc << "'>" << endl;
}

int main ()
{

	Poczta p;
	Ksiazka o;

	wczytaj ( p );
	wypisz ( p );

	wczytaj ( o );
	wypisz ( o );

	return 0;
}
