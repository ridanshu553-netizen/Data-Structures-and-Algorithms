#include<iostream>
using namespace std;
int main(){
    //Static Array
    int A[7]={1,2,3,4,5,6,7};
    cout<<A[2];

    //Dynamic Array
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    cout<<p[2];
}
