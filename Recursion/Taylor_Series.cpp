#include<iostream>
using namespace std;
double e(int x,int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(double)p/f;
    }
}
int main(){
    int a;
    cout<<"Please enter the value of a:";
    cin>>a;
    int b;
    cout<<"Please enter the value of b:";
    cin>>b;
    cout<<e(a,b);
    return 0;
}
