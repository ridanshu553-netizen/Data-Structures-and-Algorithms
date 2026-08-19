#include<iostream>
using namespace std;

int main(){
    int A[]={1,2,3,4,5,6,7,9,10};

    int length=sizeof(A)/sizeof(A[0]);
    int diff=A[0];

    for(int i=0;i<length;i++){
        if(A[i]-i!=diff){
            cout<<"The Element that is missing from the sorted array is:"<<i+diff;
            break;
        }
    }
    return 0;
}
