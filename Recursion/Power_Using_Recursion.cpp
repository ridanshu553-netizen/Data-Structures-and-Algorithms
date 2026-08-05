// #include<iostream>
// using namespace std;
// int pow(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return pow(m,n-1)*m;
//     }
// }
// int main(){
//     int a=10;
//     int b=10;
//     cout<<pow(a,b);
//     return 0;
// }

//Effecient m power n
#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return pow(m*m,n-1/2)*m;
    }
}
int main(){
    int a=7;
    int b=7;
    cout<<pow(a,b);
    return 0;
}
