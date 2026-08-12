#include <iostream>
using namespace std;

//https://www.pbinfo.ro/probleme/45/verifprim

int main()
{
    int n;
    cin >> n;
    bool prim = true;

    if(n <= 1)
    {
        prim = false;
    }

    for(int d = 2; d * d <= n; d++)
    {
        if(n % d == 0)
        {
            prim = false;
        }
    }

    if(prim == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}