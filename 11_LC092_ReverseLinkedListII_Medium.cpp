class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) {
            return head;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;

        for (int i = 1; i < left; i++) {
            prev = temp;
            temp = temp->next;
        }
        ListNode* curr = temp;
        ListNode* next = NULL;
        ListNode* p = NULL;
        for (int i = left; i <= right; i++) {
            next = curr->next;
            curr->next = p;
            p = curr;
            curr = next;
        }
        if (prev != NULL) {
            prev->next = p;
        }
        else {
            head = p;
        }
        temp->next = curr;
        return head;
    }
};
