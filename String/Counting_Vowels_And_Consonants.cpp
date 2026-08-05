#include<iostream>
using namespace std;
int main(){

    char s[]="Hey there";
    int i;
    int vcount=0;
    int ccount=0;

    for(i=0;s[i]!='\0';i++){

        if((s[i]=='a')||(s[i]=='A')||(s[i]=='e')||(s[i]=='E')||(s[i]=='i')||(s[i]=='I')||(s[i]=='o')||(s[i]=='O')||(s[i]=='u')||(s[i]=='U')){

            vcount++;

        }

        else if((s[i]>=65)&&(s[i]<=90)||(s[i]>=97)&&(s[i]<=122)){

            ccount++;
            
        }
    }
    cout<<vcount<<endl<<ccount;
}
