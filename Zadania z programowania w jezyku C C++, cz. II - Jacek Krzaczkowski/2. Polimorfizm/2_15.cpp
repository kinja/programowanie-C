/*
 Zbiór zadań z programowania w języku C/C++ cz. 2
 Jacek Krzaczkowski

 Zadanie 2.15

 Zaimplementuj klasę `czworokat` posiadającą pola chronione `a`, `b`, `c` i `d`
 służące do przechowywania długości boków czworokąta.
 Klasa czworokat powinna posiadać:
  — metodę `wypisz` wypisującą na standardowym wyjściu długości wszystkich czterech boków,
  — czysto wirtualną metodę `pole` zwracającą jako wartość pole czworokąta,
  — czteroargumentowy konstruktor nadający polom `a`, `b`, `c` i `d` wartości otrzymane w argumentach.
*/


class czworokat
{
  protected:
    double a, b, c, d;
  
  public:

    czworokat(double a, double b, double c, double d)
    {
      this->a = a;
      this->b = b;
      this->c = c;
      this->d = d;
    }

    void wypisz()
    {
      cout << "czworokat:" << endl
        << "  a: " << a << endl
        << "  b: " << b << endl
        << "  c: " << c << endl
        << "  d: " << d << endl;
    }

    virtual double pole() = 0;
};
