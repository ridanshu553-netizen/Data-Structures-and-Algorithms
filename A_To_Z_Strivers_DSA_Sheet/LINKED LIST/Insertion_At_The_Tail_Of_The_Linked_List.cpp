/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

// class Solution {
//     public:
//         ListNode* insertAtTail(ListNode* &head, int X) {
//             ListNode* n= new ListNode(X);
//             ListNode* temp=head;
//             if(head==NULL){
//                 head=n;
//             }
//             else{
//                 while(temp->next!=NULL){
//                     temp=temp->next;
//                 }
//                 temp->next=n;
//             }
//             return head;
//         }

// };