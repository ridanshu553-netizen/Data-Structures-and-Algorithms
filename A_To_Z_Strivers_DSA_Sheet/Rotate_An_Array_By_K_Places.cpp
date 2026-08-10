#include <iostream>
using namespace std;

int main() {

    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(A)/sizeof(A[0]);

    int k;
    cout<<"Please enter the value of K: ";
    cin>>k;

    int temp[10];
    for(int i=0;i<k;i++){
        temp[i]=A[i];
    }
    for(int i=k;i<n;i++){
        A[i-k]=A[i];
    }
    for(int i=0;i<k;i++){
        A[n-k+i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}