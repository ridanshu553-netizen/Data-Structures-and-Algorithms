#include<iostream>
using namespace std;
template<class T>
class Node{
public:
    T data;
    Node* next;

   Node(T val){
    data=val;
    next=NULL;
   }
};
template<class T>
class Stack{
    Node<T>* head=NULL;
    Node<T>* tail=NULL;
public:
   void push(T val){
    Node<T>*n=new Node<T>(val);
    if(head==NULL){
        head=tail=n;
    }
    else{
        n->next=head;
        head=n;
    }
   }
   void pop(){
    Node<T>* temp= head;
    head=temp->next;
    temp->next=NULL;

    delete temp;
    
   }
   T top(){
    return head->data;
   }
   bool isempty(){
    return head==NULL;
   }

};
int main(){

    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    
}