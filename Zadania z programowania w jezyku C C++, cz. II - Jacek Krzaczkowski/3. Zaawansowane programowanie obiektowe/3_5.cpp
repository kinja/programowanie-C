/*
Zadanie 3.5

Napisz klasę staly_wektor zawierającą jako pole 5-elementowy sta-
tyczny wektor stałych liczb całkowitych. Elementy wektora zainicjuj
wartością 0.
*/

#include <vector>
using namespace std;

class staly_wektor
{
    static vector<const int> tab;
};

vector<const int> staly_wektor::tab(5, 0);

int main()
{
    return 0;
}
