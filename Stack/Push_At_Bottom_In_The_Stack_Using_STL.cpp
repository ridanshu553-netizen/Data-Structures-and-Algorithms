#include<iostream>
#include<stack>
using namespace std;
void PushAtBottom(stack<int> &s,int val){


    if(s.empty()){
        s.push(val);
        return;
    }

    int temp= s.top();
    s.pop();
    PushAtBottom(s, val);
    s.push(temp);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    PushAtBottom(s,0);


    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}