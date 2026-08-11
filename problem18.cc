#include <iostream>
using namespace std;

//https://www.pbinfo.ro/probleme/3933/zero-unu

int main()
{
  int n;
  cin >> n;
  bool cifre0 = false;
  bool cifre1 = false;
  bool altecifre = false;

  do
  {
    int uc = n % 10;
    if(uc == 0)
    {
        cifre0 = true;

    }
    else if(uc == 1)
    {
        cifre1 = true;
    }
    else
    {
        altecifre = true;
    }
    n/= 10;
  } while (n > 0);

    if(cifre0 == true && cifre1 == true && altecifre == false)
    {
        cout << "da";
        return 0;
    }
    else
    {
        cout << "nu";
        return 0;
    }
  
}