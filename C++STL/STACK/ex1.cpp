#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<< "Top = "<<s.top()<< endl;
    s.pop(); // ab 4 ko hata dega and 3 se lega next command mein
    cout<< "Jeans = "<< s.top()<<endl;
    cout<< "size = "<< s.size()<<endl;

    return 0;
}