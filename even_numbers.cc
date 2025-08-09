/*
DO NOT USE CHATGPT, YOU CAN ASK ME QUESTIONS
Because if you will use chat gpt for such easy problems, you're cooked. Better ask me and I will give you just ideas. 💡
Make an array with 1000 numbers. Use the for loop for that. Make the numbers be random. Then show on the screen 
the even numbers and also how many of them you have example(292, 384, ..., you have 27 even numbers) 

Then make an option for the user to see even or odd numbers
*/


// Im about to cook this problem


#include <iostream>
#include <string>
using namespace std;


int main() {
   srand(time(NULL));
 
  int randomNumbers[1000];

  for (int i = 0; i < 1000; i++) {
    randomNumbers[i] = rand() % 1000;
  }


 
  string choice;
  int numberOfEven = 0;
  

cout << endl << endl << "Select odd or even: ";
cin >> choice;
  int evenNumbers = 0;
  int oddNumbers = 0;
   if (choice == "even") {
    for (int i = 0; i < 1000; i++) {
        if (randomNumbers[i] % 2 == 0) {
         evenNumbers++;
          cout <<randomNumbers[i] << " ";
    }

 } cout << endl << "There are: " << evenNumbers << " even numbers in total!";
  
}  else if (choice == "odd") {
    for (int y = 0; y < 1000; y++) {
        if (randomNumbers[y] % 2 !=0) {
            oddNumbers++;
            cout << randomNumbers[y] << " ";
        }
    } cout << "There are: " << oddNumbers << " odd numbers in total!";
} else {
    cout << "Invalid word! type odd or even!";
}


} 
