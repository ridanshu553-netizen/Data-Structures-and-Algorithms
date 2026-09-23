#include <iostream>
using namespace std;

int main() {
    int A[]={1,1,0,0,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1};
    int n=sizeof(A)/sizeof(A[0]);
    int Max=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(A[i]==1){
            cnt++;
            Max=max(Max, cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<Max;
}