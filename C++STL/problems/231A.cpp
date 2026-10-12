#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n ;
    cin >> n;                  // number of problems

    int count = 0;             // how many problems solved
    for (int i = 0; i < n; i++) {
        vector<int> friends(3); // opinions of Petya, Vasya, Tonya
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> friends[j];  // read opinion (0 or 1)
            sum += friends[j];  // add to sum
        }
        if (sum >= 2) count++;  // at least 2 sure → solve
    }

    cout << count << endl;      // final answer
    return 0;
} 
