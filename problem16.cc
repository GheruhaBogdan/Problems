#include <iostream>
using namespace std;


//https://www.pbinfo.ro/probleme/3077/suma-prefixe 


int main()
{
    
    int n;
    cin >> n;
    int suma = 0;
    do
    {
        suma = n + suma;
        
        n = n/10;
        
    } while (n != 0);
    
    cout << suma;

}