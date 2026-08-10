#include <iostream>
using namespace std;

int main() {

    //what is a pointer-->It is a data type which holds the address of the other data type

    int a=3;
    int *b=&a;//here pointer b is storing the address of a;

    //&-->(Address of) operator
    
    // cout<<"The address of a is:"<<&a<<endl;;
    // cout<<"The address of a is:"<<b<<endl;
    
    // //*-->Derefrence operator
    // cout<<"The value at address b is:"<<*b<<endl;

    int **c=&b;//pointer to pointer variable
    // cout<<"The address of b is:"<<&b<<endl;
    // cout<<"The address of b is:"<<c<<endl;
    // cout<<"The value of c is:"<<*c<<endl;
    // cout<<"The value of c is:"<<**c<<endl;

    //pointers and arrays

    int marks[]={1,2,3,4,5,6,7,8,9};
    int *p=marks;
    cout<<"The value of marks[0]:"<<*p<<endl;
    cout<<"The value of marks[2]:"<<*(p+1)<<endl;
    cout<<"The value of marks[3]:"<<*(p+2)<<endl;
    cout<<"The value of marks[4]:"<<*(p+3)<<endl;

    
 return 0;
}
