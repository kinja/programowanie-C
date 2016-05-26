/*
Zadanie 3.15

Napisz klasę unikalne, której obiekty posiadają stałe prywatne pole
id typu unsigned int. Klasę unikalne zaimplementuj w taki sposób,
żeby każdy obiekt tego typu w programie w momencie powstawania
otrzymywał inną wartość pola id.
*/

class unikalne
{
    private:
        const unsigned int id;
        static unsigned int x;
    
    public:    
        unikalne(): id(x)
        {
            x++;
        }
};

unsigned int unikalne::x = 0;
