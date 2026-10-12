// Write a program to find the largest element in this 2D array.int a[2][3] = {
//     {12, 7, 19},
//     {5, 25, 11}
// };
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {12, 7, 19},
        {5, 25, 11}
    };

    int largest = arr[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            
            if ( arr[i][j] > largest) {
                
                largest = arr[i][j];
            }

        }
    }

    cout << "Largest number: " << largest;

    return 0;
}