#include<iostream>
using namespace std;

void Usa(){
     cout<<"You are in usa"<<endl;
     return;
    }
void India(){
    Usa();
     cout<<"You are in india"<<endl;
     return;
}
int main(){
    cout<<"You are in Main"<<endl;
    India();
    Usa();
}
