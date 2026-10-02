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
//         ListNode* deleteKthNode(ListNode* &head, int k) {
//             ListNode* temp = head;
//             if(k==1){
//                 head=temp->next;
//                 delete temp;
//                 return head;
//             }
//             for(int i=1;i<k-1;i++){
//                 temp=temp->next;
//             }
//             temp->next=temp->next->next;
//             return head;
//         }
// };