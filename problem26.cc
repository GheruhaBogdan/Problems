#include <iostream>
using namespace std;

int main()
{
    int x[1000], y[1000];
    int n;
    int suma = 0;
    cin >> n;
    if(n < 1 || n > 200)
    {
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        y[i] = x[i];
        suma = suma +  x[i];
        if(x[i] < 0)
        {
            return 1;
        }
    
    }

    for(int i = 0; i < n; i++)
    {
       y[i] = suma - x[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << y[i] << " ";
    }
    
    
    
    return 0;
}