#include<iostream>
using namespace std;
int main(){
    //Method-1-----------------------
    int A[2][3];
    int B[2][2]={{1,2},{3,4}};
    //Method-2-----------------------
    int *C[2];
    C[0]=new int[4];
    C[1]=new int[4];
    //Method-3------------------------
    int **D;
    D=new int *[2];
    D[0]=new int[4];
    D[1]=new int[4];
}
