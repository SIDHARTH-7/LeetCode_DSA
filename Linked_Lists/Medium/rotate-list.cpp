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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        if(!k)
            return head;
        ListNode* ptr=head;
        int size=0;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            size++;
        }
        size++;
        k=(k%size);
        k=size-k;
        ptr->next=head;
        ListNode* ptr2=ptr->next;
        while(k--){
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
        ptr->next=NULL;
        head=ptr2;
        return head;
    }
};