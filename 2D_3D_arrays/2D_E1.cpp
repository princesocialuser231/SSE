// Write a complete C++ program to print the sum of each row of this matrix.int a[3][2] = {
//     {1, 2},
//     {3, 4},
//     {5, 6}
// };

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int arr[3][2]={{1,2}, {3,4},{5,6}};

    for(int i = 0 ; i<3; i++){

        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        cout<<"Sum of rows: "<<sum<<" "<<endl;

        sum = 0 ;
    }
    return 0;
}