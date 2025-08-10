/* 
Ask the user  how many numbers he wants in the array.
Let him introduce the numbers.
After that you need to find the sum of all the numbers.
Also, find the average of all the numbers. 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int how_many;

    cout << "How many numbers do you want to enter: ";
    cin >> how_many;

    vector<int> numbers;
    int x;
    
        cout << "Enter the numbers:  ";
        for (int i = 0; i < how_many; i++) {
            cout << "[" << i+1 << "]: ";
            cin >> x;
            numbers.push_back(x);
    }

    int sum = 0;
    double average;
    for(int i = 0; i < how_many; i++){
        sum += numbers[i];
    }
    average = sum / how_many;
    
cout << "the sum is: " << sum << endl << endl;
cout << "The avarege is" << average;
        return 0;
}