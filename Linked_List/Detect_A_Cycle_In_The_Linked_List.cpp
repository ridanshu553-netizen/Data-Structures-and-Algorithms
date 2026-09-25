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

class List{
public:
    Node* head;
    Node* tail;
    List(){
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
        while(temp->next!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    bool isCycle(){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                cout<<"Cycle is Detected:";
                return true;
            }
        }
        return false;
        cout<<"Cycle is Not Detected:";


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
    ll.tail->next=ll.head;
    ll.isCycle();

}