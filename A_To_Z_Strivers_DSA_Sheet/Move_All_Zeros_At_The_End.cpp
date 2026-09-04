#include<iostream>
using namespace std;
int main(){
    int A[]={1,0,2,0,3,0,4,5,6,0,7,0,0,8,0};
    int n=sizeof(A)/sizeof(A[0]);
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){ 
        if(A[i]!=0){
            temp[j]=A[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        A[i]=temp[i];
    }
    for(int i=j;i<n;i++){
        A[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
}