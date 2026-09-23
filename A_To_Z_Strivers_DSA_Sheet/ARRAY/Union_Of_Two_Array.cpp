#include <iostream>
#include<set>
using namespace std;

int main() {
    int A[]={1,2,3,4,5,6,7};
    int B[]={1,2,3,8,9,9,9};
    int n=sizeof(A)/sizeof(A[0]);
    int b=sizeof(B)/sizeof(B[0]);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }
    for(int i=0;i<b;i++){
        s.insert(B[i]);
    }
    for(auto x:s){
        cout<<x<<" ";
    }
}