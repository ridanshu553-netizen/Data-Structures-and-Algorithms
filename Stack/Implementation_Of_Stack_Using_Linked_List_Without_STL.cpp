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
    Node<T>* head;
public:
    Stack(){
        head==NULL;
    }
    void push(T val){
        Node<T>* n = new Node<T>(val);
        if(head==NULL){
            head=n;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void pop(){
        Node<T>* temp = head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    T Top(){
        return head->data;
    }
    bool isempty(){
        return head==NULL;
    }
};
int main(){
    Stack<int> s;

    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout<<s.Top()<<" ";
        s.pop();
    }
}
