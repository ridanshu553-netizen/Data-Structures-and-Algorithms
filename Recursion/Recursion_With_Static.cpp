#include<iostream>
using namespace std;
int trees(int n){
    static int x=0;
    if(n>0){
        x++;
        return trees(n-1)+x;
    }
    return 0;
}
int main(){
    int a=5;
    cout<<trees(a)<<endl;
    return 0;
}
