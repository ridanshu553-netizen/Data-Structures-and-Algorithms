#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        int idx=vec.size()-1;
        return vec[idx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};
int main(){

    Stack s;
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}