#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    
    
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    s.pop();
    cout<<"Present element right now is "<<s.top()<<endl;
    cout<<"Size of the stack is: "<<s.size()<<endl;
    return 0;
}
