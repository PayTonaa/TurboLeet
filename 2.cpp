#include <vector>

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode dummy(0);
            ListNode* tail = &dummy;
            int carry = 0;
            while (l1 || l2 || carry)
            {
                int temp = carry;
                if (l1) {temp += l1->val; l1 = l1->next;}
                if (l2) {temp += l2->val; l2 = l2->next;}
                carry = temp / 10;
                tail->next = new ListNode(temp % 10);
                tail = tail->next;
            }}
        };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            int temp = carry;
            if (l1) { temp += l1->val; l1 = l1->next; }
            if (l2) { temp += l2->val; l2 = l2->next; }
            carry = temp / 10;
            tail->next = new ListNode(temp % 10);
            tail = tail->next;
        }
        return dummy.next;
    }
};
