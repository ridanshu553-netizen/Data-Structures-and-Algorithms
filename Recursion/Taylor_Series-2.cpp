#include<iostream>
using namespace std;
int e(int x,int n){
    static int s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x/n*s;
        return e(x,n-1);
    }
}
int main(){
    int a=10;
    int b=100;
    cout<<e(a,b);
    return 0;
}
