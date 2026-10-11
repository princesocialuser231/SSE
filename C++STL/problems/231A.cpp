#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of problems
    int count = 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;   // inputs from 3 members
        if(a + b + c >= 2) {
            count++;          // problem will be solved
        }
    }

    cout << count << endl;    // final answer
    return 0;
}
