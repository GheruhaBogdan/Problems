#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original_n = n;
    int size = 0;

    if(n == 0)
    {
        size = 1;
    }
    else
    {
        while(n != 0)
        {
            n/=10;
            size++;
        }
    }

    if (original_n < 1000 || original_n > 2000000000)
    {
        return 1;
    }
    int p = pow(10, size - 2);

    int k = original_n / p;
    int e = original_n % 100;
    cout << k << setfill('0') << setw(2) << e;



    


    
}