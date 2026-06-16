class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        
        while (head != NULL) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
 while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* s = reverse(slow);
        ListNode* f= head;

        while (s!= NULL) {
            if (f->val != s->val) {
                return false;
            }

            f = f->next;
            s = s->next;
        }

        return true;
    }
};