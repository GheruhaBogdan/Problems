#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
   
    if(n == 0)
    {
        return 0;
    }
    while(n%10 == 0)
    {
        n = n/10;
    }
        
    
   cout << n;
    
}