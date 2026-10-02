#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class stack{
    vector<T> vec;
public:
    void push(T val){
       vec.push_back(val);
    }
    void pop(){
       vec.pop_back();
    }
    T top(){
        int idx=vec.size()-1;
        return vec[idx];
    }
    bool isempty(){
        return vec.size()==0;
    }
     
};
int main(){
    stack<int> s;
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){

        cout<<s.top()<<" ";
        s.pop();

    }

}