#include <iostream>
using namespace std;

class Matrix{
    private:
      int n;
      int *A; //-->it stores the address of the Array
    public:
      Matrix(int n){
        this->n=n;
        A=new int[n];
      }
      void set(int i,int j,int x);
      int get(int i,int j);
      void display();
      ~Matrix(){
        delete []A;
      }
};

void Matrix::set(int i,int j,int x){
    if(i==j){
        A[i]=x;
    }
}
int Matrix::get(int i,int j){
    if(i==j){
        return A[i];
    }
    else{
        return 0;
    }
}
void Matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    Matrix m(4);
    m.set(0,0,10);
    m.set(1,1,20);
    m.set(2,2,30);
    m.set(3,3,40);
    m.display();
}