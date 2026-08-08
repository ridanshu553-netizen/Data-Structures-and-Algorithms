#include<iostream>
using namespace std;
int fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
int main(){
    int a=5;
    fun(a);
    return 0;
}
