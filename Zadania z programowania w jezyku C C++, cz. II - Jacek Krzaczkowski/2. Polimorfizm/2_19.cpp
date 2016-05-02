/*
Zadanie 2.19
Napisz klasę wierzcholek posiadającą stałe publiczne pole wartosc
typu int oraz prywatne pola ojciec, lewy_syn, prawy_syn będące
wskaźnikami na typ wierzcholek
Napisz konstruktor klasy wierzcholek, który nadaje polu wartosc war-
tość otrzymaną jako argument, zaś pozostałym polom przypisuje war-
tość NULL.
*/

class wierzcholek
{
    public:
        static int wartosc;
    
    private:
      wierzcholek* ojciec;
      wierzcholek* prawy_syn;
      wierzcholek* lewy_syn;
  
    wierzcholek(int a)
    {
        wartosc = a;
        ojciec = NULL;
        prawy_syn = NULL;
        lewy_syn = NULL;
    }       
};

