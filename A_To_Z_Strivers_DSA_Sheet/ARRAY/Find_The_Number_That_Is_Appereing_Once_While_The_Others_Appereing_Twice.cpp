#include <iostream>
using namespace std;

int main() {
    int A[]={1,1,2,3,3,4,4};
    int n=sizeof(A)/sizeof(A[0]);
    int nums;
    int cnt;
    for(int i=0;i<n;i++){
        nums=A[i];
        cnt=0;
        for(int j=0;j<n;j++){
            if(A[j]==nums){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<nums;
        }
    }
}