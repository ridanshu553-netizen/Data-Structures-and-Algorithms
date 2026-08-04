// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return fact(n-1)*n;
//     }
// }
// int main(){
//     int a;
//     cout<<"Please enter the value of a:";
//     cin>>a;
//     cout<<fact(a);
//     return 0;
// }

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int main(){
    int a;
    cout<<"Please enter the value of a:";
    cin>>a;
    cout<<fact(a);
    return 0;
}
