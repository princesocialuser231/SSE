#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> d;  // queue ka gate do side se h. 
    d.push_back(1); // <--- --->
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);
    d.push_back(3);

    for(int x : d) cout << x << " ";
    return 0;
}