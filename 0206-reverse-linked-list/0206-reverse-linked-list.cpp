class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* slow = nullptr;
        ListNode* fast = head;

        while (fast != nullptr) {
            ListNode* temp = fast->next;
            fast->next = slow;
            slow = fast;
            fast = temp;
        }

        return slow;
    }
};