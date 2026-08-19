#include<iostream>
using namespace std;

int main(){
    int A[]={1,2,6,7,8,9,10};

    int length=sizeof(A)/sizeof(A[0]);
    int diff=A[0];

    for(int i=0;i<length;i++){
        if(A[i]-i!=diff){
            while(diff<A[i]-i){
                cout<<i+diff;
                diff++;
            }
        }
    }
    return 0;
}
