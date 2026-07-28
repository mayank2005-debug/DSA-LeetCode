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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* curr = dummy;
        map<int,int> mp;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        while (curr->next != nullptr)

        {   
            if (mp[curr->next->val]!=1)
            {
                curr->next = curr->next->next;
            }
            else
            {   
                
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};