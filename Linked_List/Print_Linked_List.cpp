#include <iostream>
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
        Node* n= new Node(val);
        if(head==NULL){
            head=tail=n;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main() {
    list ll;
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
}