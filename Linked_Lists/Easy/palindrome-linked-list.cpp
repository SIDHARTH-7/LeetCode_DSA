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
    ListNode* reverse(ListNode* head){
        if(!head->next)
            return head;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        ListNode* temp=NULL;
        while(ptr2->next!=NULL){
            ptr2=ptr2->next;
            ptr1->next=temp;
            temp=ptr1;
            ptr1=ptr2;
        }
        ptr2->next=temp;
        return ptr2;
    }
    bool isPalindrome(ListNode* head) {
        if(!head)
            return false;
        if(!head->next)
            return true;
        if(!head->next->next){
            if(head->val!=head->next->val)
                return false;
            else
                return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }    
        slow=reverse(slow->next);
        fast=head;
        while(slow!=NULL){
            if(slow->val!=fast->val)
                return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};
