#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} ep;


int main() {
    struct employee ridanshu;

    // ep ridanshu;

    ridanshu.eID=1;
    ridanshu.favChar='C';
    ridanshu.salary=120000000;
    
    cout<<"The value id: "<<ridanshu.eID<<endl;
    cout<<"The value id: "<<ridanshu.favChar<<endl;
    cout<<"The value id: "<<ridanshu.salary<<endl;
 return 0;
}
