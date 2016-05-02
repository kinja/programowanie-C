/*
Zadanie 2.16

Zaimplementuj następujące klasy pochodne klasy czworokat z zadania
2.15:
— prostokat posiadającą następujące publiczne metody:
— dwuargumentowy konstruktor nadający polom a i c wartość otrzymaną w pierwszym argumencie,zaś polom b i d wartość otrzyma-
ną w drugim argumencie,
— wymiary, która otrzymuje dwa argumenty w1 oraz w2 i nadaje
polom a i c wartość w1, zaś polom b i d wartość w2.
— kwadrat posiadającą następujące publiczne metody:
— jednoargumentowy konstruktor nadający polom a, b, c i d war-
tość otrzymaną w argumencie.
— wymiar nadającą polom a, b, c i d jedną wartość otrzymaną
w argumencie.
Klasy prostokat i kwadrat powinny mieć odpowiednio przeciążoną me-
todę pole.
*/


class prostokat : public czworokat
{
public:
    prostokat(double k, double g) : czworokat(k, g, k, g)
    {
    }

    void wymiary(double w1, double w2)
    {
        a = c = w1;
        b = d = w2;
    }

    virtual double pole()
    {
        return  a * b;
    }
};

class kwadrat : public czworokat
{
public:
    kwadrat(double e) : czworokat(e, e, e, e)
    {
    }

    void wymiar(double l)
    {
        a = b = c = d = l;
    }

    virtual double pole()
    {
        return  a * a;
    }
    
};
