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
//         ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
//             ListNode* n = new ListNode(X);
//             ListNode* temp = head;
//             if(head==NULL){
//                 head=n;
//                 return head;
//             }
//             if(K==1){
//                 n->next=head;
//                 head=n;
//                 return head;
//             }
//             for(int i=1; i<K-1;i++){
//                 temp=temp->next;
//             }
//             n->next=temp->next;
//             temp->next=n;
//             return head;

//         }
// };