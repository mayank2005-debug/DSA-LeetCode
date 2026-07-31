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
    ListNode* reverseList(ListNode* head,int k)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (k--) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head->next=curr;
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr)
        {
            return head;
        }
        if(head->next==nullptr && k==1)
        {
            return head;
        }
        ListNode* temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==nullptr)
            {
                return head;
            }
            temp=temp->next;
        }
        ListNode* newhead=reverseList(head,k);
        head->next=reverseKGroup(temp,k);
        return newhead;

        
    }
};