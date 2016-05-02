/*
 Zbiór zadań z programowania w języku C/C++ cz. 2
 Jacek Krzaczkowski

 Zadanie 2.17

 Napisz funkcję `wypisz_pola`, która otrzymuje jako argument tablicę o elementach typu `czworokat *`, gdzie `czworokat`
 jest typem zdefiniowanym w zadaniu 2.15 oraz jej rozmiar i wypisuje pola wszystkich przechowywanych w tablicy czworokątów.
*/

void wypisz_pola(czworokat* tab[], int n)
{
    for (int i = 0; i < 0; i++)
    {
        cout << tab[i]->pole() << endl;
    }
}
