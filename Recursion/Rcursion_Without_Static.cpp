#include<iostream>
using namespace std;
int tree(int n){
    if(n>0){
        return tree(n-1)+n;
    }
    return 0;
}
int main(){
    int a=5;
    cout<<tree(a)<<endl;
    return 0;
}
