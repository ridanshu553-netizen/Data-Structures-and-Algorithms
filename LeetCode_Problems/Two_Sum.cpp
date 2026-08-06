#include<iostream>
using namespace std;
int main(){
  
    int A[]={1,2,3,4,5,6,7,8,9};
    int length=sizeof(A)/sizeof(A[0]);
    int sum=7;
  
    for(int i=0;i<length;i++){
      
        for(int j=i+1;j<length;j++){
          
            if((A[i]+A[j])==sum){
                cout<<i<<" "<<j<<"-->"<<A[i]+A[j]<<endl;
            }
          
        }
    }
}
