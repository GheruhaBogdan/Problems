#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prim = n - 1;
    if(n < 3)
    {
        return 0;
    } else if(n == 3 || n == 4)
    {
        cout << 2; 
        return 0;
    }

    bool found = false;
    while(found != true)
    {
        found = true;
        for(int d = 2; d * d <= prim; d++)
        {
            if(prim % d == 0)
            {
                prim--;
                found = false;
                break;
            }
        }
    }

    cout << prim;
}