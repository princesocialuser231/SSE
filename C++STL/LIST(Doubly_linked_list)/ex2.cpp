#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int> d;  // queue ka gate do side se h. 
    d.push_back(1); // <--- --->
    d.push_back(3);
    d.push_back(2);
    d.push_front(0);
    //d.pop_back();

    auto it = d.begin();
    advance(it, 1); // matlab iske index ko set karna jaha insert karna h
    d.insert(it, 6);
    d.erase(it);

    for(int x : d) cout << x << " ";
    return 0;
}