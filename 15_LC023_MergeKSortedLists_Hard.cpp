class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for(int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];
            while(temp != NULL) {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for(int i = 0; i < arr.size(); i++) {
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }
        return dummy->next;
    }
};
