#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want to be reversed: ";
    cin >> n;

    int rem = 0;
    int new_n = 0;

    while (n > 0) {
        rem = n % 10;          
        new_n = new_n * 10 + rem; 
        n = n / 10;           
    }

    cout << new_n << endl;
    return 0;
}
