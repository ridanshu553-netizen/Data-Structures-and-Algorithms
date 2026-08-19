#include<iostream>
using namespace std;
int main(){

    int A[]={1,9,20,1,3,4,7,6,2,9};
    int length=sizeof(A)/sizeof(A[0]);
    int count;

    for(int i=0;i<length;i++){
        count=1;

        if(A[i]!=-1){
            for(int j=i+1;j<length;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }

            if(count>1){
                cout<<A[i]<<endl;
            }
        }
    }
}
