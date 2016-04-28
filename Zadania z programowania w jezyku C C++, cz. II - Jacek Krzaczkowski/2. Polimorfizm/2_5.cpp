/*
 Zbiór zadań z programowania w języku C/C++ cz. 2
 Jacek Krzaczkowski

 Zadanie 2.5

 Zaimplementuj klasę `funkcja_liniowa` pochodną klasy `funkcja` z zadania 2.4.
 Klasa `funkcja_liniowa` powinna zawierać publiczne pola `a` i `b` oraz przeciążoną metodę `wartosc` w taki sposób,
 żeby zwracała wartość funkcji `a*x+b`.
*/

class funkcja_liniowa : public funkcja
{
  public:
    double a;
    double b;
  
    double wartosc()
    {
      return a*x+b;
    }
};
