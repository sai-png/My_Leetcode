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
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *h1 = new ListNode(-1);
        ListNode *p = h1;
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                p->next = l1;
                l1 = l1->next;
            }
            else
            {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        if(l1)
        {
            p->next = l1;
            l1 = l1->next;
        }
        if(l2)
        {
            p->next = l2;
            l2 = l2->next;
        }
        return h1->next;
    }
    ListNode *mergeSort(ListNode* head)
    {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *slow = head, *fast = head, *temp = NULL;
        while(fast && fast->next)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        ListNode *l1 = mergeSort(head);
        ListNode *l2 = mergeSort(slow);
        return merge(l1, l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(lists.empty())
        {
            return NULL;
        }
        ListNode *head = new ListNode(-1);
        ListNode* p = head;
        for(int i=0; i<k; i++)
        {
            ListNode *prev = p;
            ListNode *temp = lists[i];
            if(!temp)
            {
                continue;
            }
            else
            {
                prev->next = temp;
                while(temp->next)
                {
                    temp = temp->next;
                }
                p = temp;
            }
        }
        if(!head->next)
        {
            return NULL;
        }
        return mergeSort(head->next);
    }
};