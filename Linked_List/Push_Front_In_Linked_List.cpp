#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class list{
    Node* head;
    Node* tail;
public:
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node*n=new Node(val);  //In step-1 we have created the new node
        if(head==NULL){
            head=tail=n;  //In step-2 we have assigned the head and tail to the new node
        }
        else{
            n->next=head;
            head=n;
        }
    }
};

int main(){
    list ll;
    ll.push_front(3);    
    ll.push_front(2);    
    ll.push_front(1);    

}