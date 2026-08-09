#include<iostream>
using namespace std;
int main(){
    //Row Major Mapping
    int BaseAddress=100;
    int A[2][4]={
        {1,2,3,4},
        {5,6,7,8},
    };
    int Address=BaseAddress+((1*4)+2)*2;
    cout<<Address;
}
