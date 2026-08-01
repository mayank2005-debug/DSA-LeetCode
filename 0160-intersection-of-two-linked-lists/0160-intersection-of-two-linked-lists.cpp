/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        map<ListNode*,bool> mp;
        while(temp!=nullptr)
        {
            mp[temp]=true;
            temp=temp->next;
        }
        ListNode* box=headB;
        while(box!=nullptr)
        {
            if(mp[box]==true)
            return box;
            box=box->next;
        }
        return nullptr;
    }   
};