/*
Zadanie 2.25

Napisz abstrakcyjną klasę stos definiującą interfejs stosu liczb całkowi-
tych. Klasa stos powinna posiadać następujące publiczne czysto wir-
tualne metody:
— z_wierzchu zwracająca wartość elementu leżącego na wierzchu sto-
su,
— usun_z_wierzchu usuwającą element położony na wierzchu stosu,
— dodaj_na_koniec kładący na stosie liczbę całkowitą otrzymaną
w argumencie,
— pusty zwracającą true, jeżeli stos jest pusty i false w przeciwnym
wypadku.
*/

class stos
{
    public:
        virtual int z_wierzchu() = 0;
        
        virtual void usun_z_wierzchu() = 0;
        
        virtual void dodaj_na_koniec(int y) = 0;
        
        virtual bool pusta() = 0;
        
        virtual ~stos();
};
