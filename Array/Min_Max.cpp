#include<iostream>
using namespace std;
int main(){

    int A[9]={0,1,2,3,9,10,20,30,90};

    int length=sizeof(A)/sizeof(A[0]);

    int min=A[0];

    int max=A[0];

    for(int i=1;i<length;i++){

        if(A[i]<min){
            min=A[i];
        }


        else if(A[i]>max){
            max=A[i];
        }
    }

    cout<<min<<endl<<max;

}
