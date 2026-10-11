#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
     //int average, sum = 0; 
    vector<int> v= {1,2,3,4,5,6,7,8,9,10};
// Range based - sidha kaho ki train ki sari coaches order mein present karo

//average nikalana of marks 1 to 10
    // for(int x : v){
    //     //cout<< x<< " ";
    //     sum= (sum+ x); 
    // }
    // average = sum/10;
    // cout<< average<< " ";


    // method 2  -- accumulate ka matlab jitne bhi coaches hai uske weights ko add kardo and sum ko 0 se shuru karo 
    // int sum = accumulate(v.begin(), v.end(), 0); // to add all elements
    // double average = (double)sum / v.size(); //v.size se total count of elements aaya vec ka
    // cout<< average;


    // avg of first five elements
    int sumS= accumulate(v.begin(), v.begin()+5 ,0);
    double avg = (double)sumS / 5;
    cout<< avg;
    return 0;
}