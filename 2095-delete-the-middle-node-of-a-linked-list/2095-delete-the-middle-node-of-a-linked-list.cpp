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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr)
        {
            return nullptr;
        }
        ListNode* start=head;
        ListNode* fast=head;
        ListNode* prev=start;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            prev=start;
            start=start->next;
            fast=fast->next->next;
            

        }
        prev->next=start->next;
        return head;
    }
};