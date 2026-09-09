#include<iostream>
using namespace std;
//It helps to make the node of the linked list
class Node{
    int data;
    Node* next;
public:
    Node(int val){
        data=val;
        next=NULL;
    }
};
//In class list it is collection of nodes
class list{
    Node* Head;
    Node* Tail;
public:
    list(){
        Head=NULL;
        Tail=NULL;
    }
};
int main(){

}