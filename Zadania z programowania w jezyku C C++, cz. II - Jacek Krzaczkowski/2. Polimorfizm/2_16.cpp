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