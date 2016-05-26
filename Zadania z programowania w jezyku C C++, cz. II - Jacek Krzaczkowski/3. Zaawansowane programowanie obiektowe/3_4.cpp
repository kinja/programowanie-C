/*
Zadanie 3.4

Napisz klasę stala_tablica zawierającą jako pole 5-elementową sta-
tyczną tablicę stałych liczb całkowitych. Elementy tablicy zainicjuj war-
tościami kolejnych liczb pierwszych począwszy od 2.
*/

class stala_tablica
{
    static const int tab[5];
};

const int stala_tablica::tab[] = {2, 3, 5, 7, 11};
