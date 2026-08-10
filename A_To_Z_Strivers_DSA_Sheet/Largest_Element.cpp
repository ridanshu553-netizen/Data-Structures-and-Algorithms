#include<iostream>
using namespace std;
int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};

    int length=sizeof(A)/sizeof(A[0]);

    int L=0;

    for(int i=0;i<length;i++){

        if(A[i]>L){

            L=A[i];

        }

    }

    cout<<L;
    
}