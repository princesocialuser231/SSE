#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<"Size: "<< v.size()<< endl;
    cout  <<"Capacity:"<< v.capacity()<<endl;

    cout<< v[0]<<endl;
    cout<< v.at(1) << endl;
    cout<< v.front()<<endl;
    cout<< v.back()<< endl;

    v.pop_back(); // removes 30 
    cout << "Size after pop: " << v.size()<<endl;
    
}
