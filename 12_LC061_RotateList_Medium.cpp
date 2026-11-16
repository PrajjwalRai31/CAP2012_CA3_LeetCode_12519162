class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* temp = head;
        int n = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }
        k = k % n;
        if (k == 0) {
            return head;
        }
        temp->next = head;
        int steps = n - k;
        while (steps > 0) {
            temp = temp->next;
            steps--;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
