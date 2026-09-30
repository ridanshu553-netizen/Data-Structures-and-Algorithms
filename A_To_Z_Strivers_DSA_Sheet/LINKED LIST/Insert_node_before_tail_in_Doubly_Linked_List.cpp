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
//     ListNode* insertBeforeTail(ListNode* head, int X) {
//         ListNode* n = new ListNode(X);
//         ListNode* temp=head;
//          if (head == NULL) {
//             return n;
//         }
//         if (head->next == NULL) {
//             n->next = head;
//             head->prev = n;
//             return n;
//         }
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         n->next=temp;
//         n->prev=temp->prev;
//         temp->prev->next=n;
//         temp->prev=n;
//         return head;
        
//     }

// };