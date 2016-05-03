/*
Zadanie 2.22

Napisz abstrakcyjną klasę kolejka definiującą interfejs kolejki
liczb całkowitych. Klasa kolejka powinna posiadać następujące pu-
bliczne czysto wirtualne metody:
— pierwszy zwracającą wartość pierwszego elementu kolejki,
— usun_pierwszy usuwającą pierwszy element kolejki
— dodaj_na_koniec, dodającą na koniec kolejki liczbę całkowitą otrzy-
maną w argumencie,
— pusta zwracającą true, jeżeli kolejka jest pusta i false w przeciw-
nym wypadku.
Klasa powinna udostępniać także wirtualny destruktor.
*/


class kolejka
{
    public:
        virtual int pierwszy() = 0;
        
        virtual void usun_pierwszy() = 0;
        
        virtual void dodaj_na_koniec(int x) = 0;
        
        virtual bool pusta() = 0;

        virtual ~kolejka();
};
