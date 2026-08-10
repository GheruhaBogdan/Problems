#include <iostream>
using namespace std;
//https://infoas.ro/problema/cmmmc

int main()
{
    int x, y;
    cin >> x >> y;
    int n = x;
    int  m = y;

    if(x < 1 || y < 1)
    {
        return 0;
    }

    while(n != m)
    {
        if(n < m)
        {
            n = n + x;
        }
        else
        {
            m = m + y;
        }

    }

    

   cout << n;
}