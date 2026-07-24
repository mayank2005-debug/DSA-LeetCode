/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head, int x)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr && x--)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect the tail of the reversed part
        head->next = curr;

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        if(head == nullptr || head->next == nullptr || left == right)
            return head;

        // Reverse starts from the head
        if(left == 1)
        {
            return reverseList(head, right);
        }

        ListNode* temp = head;
        ListNode* connector = nullptr;

        
        for(int i = 1; i < left; i++)
        {
            connector = temp;
            temp = temp->next;
        }

        connector->next = reverseList(temp, right - left + 1);

        return head;
    }
};