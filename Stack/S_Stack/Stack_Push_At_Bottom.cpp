#include<iostream>
#include<stack>
void pushatbottom(std::stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }


    int temp=s.top();
    s.pop();
    pushatbottom(s, val);
    s.push(temp);
}
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    pushatbottom(s,0);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    
}