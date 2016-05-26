/*
Zadanie 3.14

Napisz klasę policzona posiadającą publiczną metodę ile zwra-
cającą jako wartość liczbę istniejących w danym momencie obiektów tej
klasy.
*/

class policzona
{
    public:
        int ile()
        {
            return _ile;
        }
        
        policzona()
        {
            _ile++;
        }
        
        ~policzona()
        {
            _ile--;
        }
        
    private:
        static int _ile;
};

int policzona::_ile = 0;
