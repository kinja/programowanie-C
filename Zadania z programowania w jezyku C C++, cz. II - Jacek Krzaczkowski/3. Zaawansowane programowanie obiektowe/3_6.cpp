/*
Zadanie 3.6

Napisz klasę zesp posiadającą publiczne statyczne metody dodaj,
odejmij, pomnoz, podziel, które otrzymują jako argumenty dwa obiek-
ty typu zespolone z tabelki 3.3.1 i zwracają jako wartość wynik od-
powiedniego działania. Klasa zesp powinna posiadać
także publiczną statyczną stałą i typu zespolone o wartości √−1.
*/

class zespolone
{
    public:
        double re, im;
        zespolone()
        {}
        zespolone (double r, double i ) : re(r), im(i)
        {}
};

class zesp
{
    public:
        static const zespolone i = zespolone(0, -1);
        
        static zespolone dodaj(zespolone a, zespolone b)
        {
            zespolone c;
            
            c.re = a.re + b.re;
            c.im = a.im + b.im;
            
            return c;
        }
        static zespolone odejmij(zespolone a, zespolone b)
        {
            zespolone c;
            
            c.re = a.re - b.re;
            c.im = a.im - b.im;
            
            return c;
        }
        static zespolone pomnoz(zespolone a, zespolone b)
        {
            zespolone c;

            c.re = a.re*b.re - a.im*b.im;
            c.im = a.im*b.re + a.re*b.im;
                
            return c;
        }
        static zespolone podziel(zespolone a, zespolone b)
        {
            zespolone c;
            
            double tmp = b.re*b.re + b.im*b.im;        
            
            c.re = (a.re*b.re + a.im*b.im) / tmp;
            c.im = (a.im*b.re - a.re*b.im) / tmp;
            
            return c;
        }
};
