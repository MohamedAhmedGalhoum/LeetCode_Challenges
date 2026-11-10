// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* prev = nullptr;
//         ListNode* Current = head;
//         ListNode* leftt = head;
//         ListNode* rightt = head;
//         while(Current != nullptr){
//             if(Current->val == left){
//                 leftt = Current;
//             }
//             if(Current->val == right){
//                 rightt = Current;
//             }
//             Current = Current->next;
//         }
//         while(leftt != rightt){
//             ListNode* nextNode = leftt->next; 
//             leftt->next = prev;
//             prev = leftt;
//             leftt = nextNode;
//         }
//         return prev;
//     }
// };
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* beforeLeft = &dummy;
        for (int i = 1; i < left; ++i) {
            beforeLeft = beforeLeft->next;
        }
        ListNode* sublistTail = beforeLeft->next;
        ListNode* prev = nullptr;
        ListNode* current = sublistTail;
        for (int i = 0; i < right - left + 1; ++i) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        beforeLeft->next = prev;
        sublistTail->next = current;
        return dummy.next;
    }
};
