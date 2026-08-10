#include<iostream>
using namespace std;
int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};

    int length=sizeof(A)/sizeof(A[0]);

    bool sorted =true;

    for(int i=0;i<length;i++){

        if(A[i]>=A[i+1]){

            sorted=false;

            break;
        }

    }
    if(sorted){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

}