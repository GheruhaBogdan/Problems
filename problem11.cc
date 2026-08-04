#include <iostream>
using namespace std;

int main()
{
    int n;
    int s =0 ;
    cin >> n;

    for(int d = 1; d * d <= n; d++)
    {
        if(n % d == 0)
        {
            
            s = d + s;

             if(d * d < n)
        {
            
            s = s + n/d;
        }
        }
       
    }
    cout << s;
}