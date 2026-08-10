#include<iostream>
using namespace std;

int fact(int n,int product){
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int number;
    cout<<"Enter the value of number:";
    cin>>number;
    int product=1;
    cout<<fact(number,product);
}
