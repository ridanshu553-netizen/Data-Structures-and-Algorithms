//To tackle repetation
//there are certain piece of code that we use a lot of times in problem

//Baic Syntax---------->


#include<iostream>
using namespace std;
void Usa(){
     cout<<"You are in usa"<<endl;
     return;
    }
void India(){
     cout<<"You are in india"<<endl;
     return;
}
int main(){
    // cout<<"Good Morning"<<endl;
    // cout<<"How are you?"<<endl;
    // greet(); //Function Call
    // cout<<"Hey"<<endl;
    // greet();
    cout<<"You are in Main"<<endl;
    India();
    Usa();
}

//main()--> Cannot be called more than once

//return--> It esures the ending of the function
