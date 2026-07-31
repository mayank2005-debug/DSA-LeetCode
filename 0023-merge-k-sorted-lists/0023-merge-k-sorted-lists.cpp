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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if(list1 == NULL)
            return list2;

        if(list2 == NULL)
            return list1;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while(list1 != NULL && list2 != NULL)
        {
            ListNode* temp;

            if(list1->val <= list2->val)
            {
                temp = list1;
                list1 = list1->next;
            }
            else
            {
                temp = list2;
                list2 = list2->next;
            }

            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }

        if(list1 != NULL)
            tail->next = list1;

        if(list2 != NULL)
            tail->next = list2;

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        int size = lists.size();

        if(size == 0)
            return NULL;

        ListNode* ans = lists[0];

        for(int i = 1; i < size; i++)
        {
            ans = mergeTwoLists(ans, lists[i]);
        }

        return ans;
    }
};