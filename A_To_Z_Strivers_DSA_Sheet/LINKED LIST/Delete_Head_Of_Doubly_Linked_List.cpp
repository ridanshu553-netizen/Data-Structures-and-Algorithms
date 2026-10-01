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
//     ListNode *deleteHead(ListNode *&head) {
//         if(head==NULL){
//             return NULL;
//         }
//         ListNode* temp =head;
//         if(head->next==NULL){
//             head=NULL;
//             delete temp;
//             return head;
//         }
//         head=temp->next;
//         temp->next=NULL;
//         head->prev=NULL;
//         delete temp;
//         return head;
//     }
// };