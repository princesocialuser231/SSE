#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l; // add or delte elements anywhere
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.push_back(40);
    for( int x:l) 
    cout<<x<<" ";
    return 0;
}
