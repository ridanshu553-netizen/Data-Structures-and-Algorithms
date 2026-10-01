/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

// class Solution {
// public:
//     ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
//         ListNode* n = new ListNode(X);
//         ListNode*  temp = head;
//         if(head==NULL){
//             return n;
//         }
//         if(K==1){
//             n->next=head;
//             head->prev=n;
//             head=n;
//             return head;
//         }
//         for(int i=1;i<K;i++){
//             temp=temp->next;
//         }
//         n->next=temp;
//         n->prev=temp->prev;
//         temp->prev->next=n;
//         temp->prev=n;

//         return head;
//     }

// };