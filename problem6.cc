#include <iostream>
using namespace std;



int main()
{
    long long  a;
    long long  b;
    cin >> a >> b;
    int ra = 0;
    int rb = 0;

    while(a != 0 || b != 0)
    {
        long long ca = a % 10;
        long long cb = b % 10;
        ra = ra + ca;
        rb = rb + cb;
        a = a / 10;
        b = b / 10;
       
        
    }
        if ((ra % 2 == 0 || ra % 3 == 0 || ra % 5 == 0) && (rb % 2 == 0 || rb % 3 == 0 || rb % 5 == 0))
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
        



}
    
