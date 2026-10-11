#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v= {1,2,3,4,5,6,7,8,9,10};
// Range based - sidha kaho ki train ki sari coaches order mein present karo
    for(int x : v){
        cout<< x<< " ";
    }
    return 0;
}