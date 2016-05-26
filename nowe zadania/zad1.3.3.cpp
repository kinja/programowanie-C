#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int e;
    int r;
    int o;
    
    cin >> e >> r >> o;
    
    int najwieksza = e;
    
    if (najwieksza < r)
    {
        najwieksza = r;
    }
    
    if ( najwieksza < o)
    {
        najwieksza = o;
    }
    
    cout << najwieksza << endl;
    
    return 0;
}
