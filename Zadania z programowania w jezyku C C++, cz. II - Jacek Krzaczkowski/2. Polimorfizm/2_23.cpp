/*
Zadanie 2.23

Napisz klasy kolejka_listowo i kolejka_tablicowo pochodne
klasy kolejka z zadania 2.22 zawierające odpowiednio listową i tablico-
wą implementację kolejki. Pamiętaj o zaimplementowaniu destruktorów
klas kolejka_listowo i kolejka_tablicowo.
*/



struct element
{
    int wartosc;
    element* nastepny;
};


class kolejka_listowo : public kolejka
{
    private:
        element* poczatek;
        element* koniec;

    public:
        virtual int pierwszy()
        {
            if(poczatek == NULL)
            {
                return -1;
            }
            
            return poczatek->wartosc;
        }
        
        virtual void usun_pierwszy()
        {
            if(pusta())
            {
                return;
            }
            
            element* tymczasowy;
            tymczasowy = poczatek;
            poczatek = poczatek->nastepny;
            
            if(koniec == tymczasowy)
            {
                koniec = NULL;
            }
            delete tymczasowy;
        }
        
        virtual void dodaj_na_koniec(int x)
        {
            element* nowy = new element;
            nowy->wartosc = x;
            nowy->nastpepny = NULL;
            
            if(pusta())
            {
                poczatek = nowy;
                koniec = nowy;
            }
            else
            {
                koniec->nastepny = nowy;
                koniec = nowy;
            }
        }
        
        virtual bool pusta()
        {
            return poczatek == NULL;
        }

        virtual ~kolejka_listowo()
        {
            while(!pusta())
            {
                usun_pierwszy();
            }
        }  
        
    virtual kolejka_listowo()
    {
        poczatek = NULL;
        koniec = NULL;
    } 
}; 

class kolejka_tablicowo : public kolejka
{
    private:
        
    
    public:
        virtual int pierwszy()
        {
            
        }
        
        virtual void usun_pierwszy()
        {
            
        }
        
        virtual void dodaj_na_koniec(int x)
        {
            
        }
        
        virtual bool pusta()
        {
            
        }

        virtual ~kolejka_tablicowo()
        {
            
        }  
        
    virtual kolejka_tablicowo()
    {
        
    } 

};
