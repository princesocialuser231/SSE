#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int rem = 0;
    int reversed = 0;

    while (n > 0) {
        rem = n % 10;              // extract last digit
        reversed = reversed * 10 + rem; // build reversed number
        n = n / 10;                // remove last digit
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
