#include<iostream>
#include<set>
using namespace std;
int main(){

    int A[]={1,2,2,3,3,4,5,6,7};

    int n=sizeof(A)/sizeof(A[0]);

    set<int> s;

    for(int i=0;i<n;i++){

        s.insert(A[i]);

    }

    for(auto x:s){

        cout<<x<<" ";

    }
    
}