#include<iostream>
using namespace std;
int main(){
    //Intialising the length,index variables

    int length=7;

    int index=3;
    //Creating the array of name A of size-->10 and length-->7
    int A[10]={1,2,3,4,5,6,7};
    //variable x used to store the deleted value
    int x=A[index];
    //for loop to delete the selected element from an selected index
    for(int i=index;i<length-1;i++){
        A[i]=A[i+1];
    }
    length--;

    for(int i=0;i<length;i++){

        cout<<A[i]<<endl;

    }
    cout<<x;
}
