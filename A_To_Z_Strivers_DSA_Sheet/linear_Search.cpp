#include<iostream>
using namespace std;
int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};

    int n=sizeof(A)/sizeof(A[0]);

    int key;

    cout<<"Enter the Key value: ";

    cin>>key;

    for(int i=0;i<n;i++){

        if(A[i]==key){

            cout<<A[i]<<" At a index: "<<i;

        }

    }
    
}