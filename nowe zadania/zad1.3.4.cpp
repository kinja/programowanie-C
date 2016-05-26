#include <stdio.h>
#include <iostream>
#include <math.h>


int bezwzgledna (int liczba)
{
    if (liczba < 0)
    {
        return -liczba;
    }
    else
    {
        return liczba;
    }
}


using namespace std;

int main()
{
    int x;
    int y;
    
    cin >> x >> y;
      
    if (bezwzgledna(x) > bezwzgledna(y))
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }


    return 0;
}
