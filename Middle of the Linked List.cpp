class Solution {
public:
    int size(ListNode * head)
    {
        if(head->next == NULL) return 1;
        return 1 + size(head->next);
    }

    ListNode* middleNode(ListNode* head) {
        ListNode *cur = head;
        int sz = size(head) / 2 + 1;
        for(int i = 1 ; i < sz ; i++)
            cur = cur->next;
        return cur;
    }
};
