#include<iostream>
using namespace std;
int main(){

    int A[10]={6,3,8,10,16,7,5,2,9,14};

    int length=sizeof(A)/sizeof(A[0]);

    int K;

    cout<<"Please Enter the value of K in the number format only:";
    
    cin>>K;

    for(int i=0;i<length;i++){

        for(int j=i+1;j<length;j++){

            if(A[i]+A[j]==K){
                cout<<A[i]<<endl<<A[j]<<endl;
            }

        }

    }

}
