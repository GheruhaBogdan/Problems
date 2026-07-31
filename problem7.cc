#include <iostream>
#include <cmath>
using namespace std;

//Problem: https://www.pbinfo.ro/probleme/4868/echilibru

int main()
{
    long long n;
    long long s1 = 0;
    long long s2 = 0;
    cin >> n;
    long long temp = n;
    long long counter = 0;
    
    while(temp > 0)
    {
        counter++;
        temp /= 10;
    }

    int half = counter / 2;
    int divisor = pow(10, half);

    int half1 = n / divisor;
    int half2 = n % divisor;
    

    

    while (half1 != 0 || half2 != 0)
    {
        int cn = half1 % 10;
        s1 = cn + s1;
        half1 /= 10;
        int cn1 = half2 % 10;
        s2 = cn1 + s2;
        half2 /= 10;
    }

    
    if(s1 % 2 == 0 && s2 % 2 == 0 && s1 == s2)
    {
        int s = s1 + s2;
        cout << s / 2;
    }
    else
    {
    cout << "NU";    
    }
    
   

    
    

    
   


    
}