class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || head->next ==  nullptr) return false;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != nullptr){
            cout<<fast->val<<' ';
            slow = slow->next;
            fast = fast->next;
            if(fast == nullptr) return false;
            else fast = fast->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
