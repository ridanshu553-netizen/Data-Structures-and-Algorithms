#include<iostream>
using namespace std;
class Node{
public:
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
    List(){
       head=NULL;
       tail=NULL; 
    }
    void push_front(int val){
        Node* n=new Node(val);
        n->next=head;
        head=n;
    }
    void print(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
}