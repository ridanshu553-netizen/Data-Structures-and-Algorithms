#include <iostream>
using namespace std;

int main() {
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(A)/sizeof(A[0]);
    int temp=A[0];
    for(int i=1;i<n;i++){
        A[i-1]=A[i];
    }
    A[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}