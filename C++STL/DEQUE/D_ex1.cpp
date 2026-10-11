#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> d;  // queue ka gate do side se h. 
    d.push_back(10); // <--- --->
    d.push_back(20);
    d.push_back(30);
    d.push_front(40);
    d.push_back(50);

    for(int x : d) cout << x << " ";
    return 0;
}