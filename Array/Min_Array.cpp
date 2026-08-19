#include<iostream>
using namespace std;
int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};
    int length=10;
    int min=A[0];
    for(int i=0;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<min;
}
