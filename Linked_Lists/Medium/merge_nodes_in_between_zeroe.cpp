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

// error because of missing class, this is just a solution function


class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode* ptr=head; 
        ListNode* ptr1=head;
        while(ptr1->next!=NULL)
        {
            ptr=ptr->next;
            if(ptr->val!=0)
            {
                sum=sum+ptr->val;
            }
            else
            {
                ptr->val=sum;
                ptr1->next=ptr;
                ptr1=ptr1->next;
                sum=0;
            }
        }
        head=head->next;
        return head;
    }
};