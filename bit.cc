#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;  

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;

        if (t == "++X" || t == "X++") {
            x += 1;
        } else if (t == "--X" || t == "X--") {
            x -= 1;
        }
    }

    cout << x << endl;

    return 0;
}
