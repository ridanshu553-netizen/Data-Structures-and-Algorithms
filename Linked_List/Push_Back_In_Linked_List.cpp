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
    void push_back(int val){
        Node* n=new Node(val);
        if(head==NULL){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
};

int main(){
    list ll;
    ll.push_front(3);    
    ll.push_front(2);    
    ll.push_front(1);    
    ll.push_back(4);    
    ll.push_back(5);    
    ll.push_back(6);    
    ll.push_back(7);    

}