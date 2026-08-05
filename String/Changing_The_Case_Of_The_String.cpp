#include<iostream>
using namespace std;
int main(){

    char s[]="WELCOME";
    int i;

    for(i=0;s[i]!='\0';i++){

        if((s[i]>65)&&(s[i]<=90)){

            s[i]=s[i]+32;

        }
    }
    for(int i=0;s[i]!='\0';i++){

        cout<<s[i];
        
    }
}
