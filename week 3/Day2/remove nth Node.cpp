class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode d(0);
        d.next = head;

        ListNode* fast = &d;
        ListNode* slow = &d;
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return d.next;
    }
};