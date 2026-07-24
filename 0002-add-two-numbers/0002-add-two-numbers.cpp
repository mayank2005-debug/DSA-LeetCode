class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int sum = l1->val + l2->val;
        int carry = sum / 10;

        ListNode* head = new ListNode(sum % 10);
        ListNode* tail = head;

        l1 = l1->next;
        l2 = l2->next;

        while (l1 != nullptr && l2 != nullptr)
        {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;

            ListNode* temp = new ListNode(sum % 10);
            tail->next = temp;
            tail = temp;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != nullptr)
        {
            sum = l1->val + carry;
            carry = sum / 10;

            ListNode* temp = new ListNode(sum % 10);
            tail->next = temp;
            tail = temp;

            l1 = l1->next;
        }

        while (l2 != nullptr)
        {
            sum = l2->val + carry;
            carry = sum / 10;

            ListNode* temp = new ListNode(sum % 10);
            tail->next = temp;
            tail = temp;

            l2 = l2->next;
        }

        if (carry)
        {
            tail->next = new ListNode(carry);
        }

        return head;
    }
};