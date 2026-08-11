#include<iostream>
using namespace std;
int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};
    int B[7]={9,19,27,37,49,59,69};
    int C[17];
    int length=10;
    int length1=7;
    int length2=length + length1;
    int i=0;
    int j=0;
    int k=0;
    while(i<length && j<length1 ){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    //For Remaining Elements
    for(;i<length;i++){
        C[k++]=A[i];
    }
    for(;j<length1;j++){
        C[k++]=B[j];
    }
    for(k=0;k<length2;k++){
        cout<<C[k];
    }
}
