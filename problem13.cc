#include <iostream>
#include <iomanip>
using namespace std;

// problem: https://infoas.ro/problema/medie-divizori

int main()
{
    int  n;
    double valori = 0;
    double  suma = 0;
    
    cin >> n;

    for(int d = 1; d * d <= n; d++)
    {
        if(n % d == 0)
        {
            suma = suma + d;
            valori++;
            if(d * d < n)
            {
                suma = suma + n/d;
                valori++;
            }
        }

    }

   

    double rezultat = suma / valori;
    cout << fixed << setprecision(2) << rezultat; 


}