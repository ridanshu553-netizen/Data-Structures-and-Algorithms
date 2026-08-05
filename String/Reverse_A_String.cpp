#include<iostream>
using namespace std;
int main(){

    char A[]="Ridanshu";
    char B[8];
    int i;

    for(i=0;A[i]!='\0';i++){}

    i=i-1;
    int j=0;

    for(;i>=0;i--,j++){

        B[j]=A[i];

    }
    B[j]='\0';

    for(int i=0;B[i]!=0;i++){

        cout<<B[i];

    }
    
}
