#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> vec;
public :
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        int idx= vec.size()-1;
        return vec[idx];
    }
    bool isempty(){
        return vec.size()==0;
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}