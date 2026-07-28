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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr)
        {
            return nullptr;
        }
        vector<int> v;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode* heady=new ListNode(v[0]);
        ListNode* taily=heady;
        for(int i=1;i<v.size(); i++)
        {
            ListNode* temp=new ListNode(v[i]);
            taily->next=temp;
            taily=temp;
        }
        return heady;
        
    }
};