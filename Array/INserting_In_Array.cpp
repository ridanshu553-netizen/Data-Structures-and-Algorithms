#include<iostream>
using namespace std;
int main(){
    int length=6;
    int arr[10]={1,2,3,4,5,6};
    // cout<<arr[4]<<endl;
    // for(int i=0;i<length;i++){ //Display()
    //     cout<<arr[i];
    // }


    //Add(x)/Append(x)-->Adds elements at the end of the array

    arr[length]=100;
    length++;
    
    // for(int i=0;i<length;i++){
    //     cout<<arr[i];
    // }


    //Insert(index,x)-->Adds elements at given Index

    int index=4;
    for(int i=length;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=15;
    length++;
    for(int i=0;i<length;i++){

        cout<<arr[i];

    }

}
