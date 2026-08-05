#include<iostream>
using namespace std;
int C(int n,int r){
    if((r==0)||(n==r)){
        return 1;
    }
    if(r>n){
        return 0;
    }
    else{
        return C(n-1,r-1)+C(n-1,r);
    }
}
int main(){
    int a;
    cout<<"Please enter the value of a:";
    cin>>a;
    int b;
    cout<<"Please enter the value of b:";
    cin>>b;
    cout<<C(a,b);
    return 0;
}
