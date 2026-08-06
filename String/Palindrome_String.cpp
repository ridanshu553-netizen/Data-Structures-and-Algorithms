#include<iostream>
using namespace std;
int main(){

    char A[]="Ridanshu";

    char B[8];

    int i;

    for(i=0;A[i]!='\0';i++){}

    i=i-1;

    int j;

    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }

    B[j]='\0';

    for(j=0;B[j]!=0;j++){
        cout<<B[j]<<" ";
    }
    int k;
    for(k=0;A[k]!='\0' && B[k]!='\0';k++){
        if(A[k]!=B[k]){
            break;
        }
    }
    if(A[k]==B[k]){
        cout<<"Palindrome String";
    }
    else{
        cout<<"Not a Palindrome String";
    }

}
