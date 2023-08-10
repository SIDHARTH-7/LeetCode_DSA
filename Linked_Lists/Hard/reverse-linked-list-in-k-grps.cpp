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
    int sizeLinkedList(ListNode* ptr){
        int count=0;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;
        ListNode* ptr=head;
        ListNode* temp2=NULL;
        int siz=sizeLinkedList(head);
        if(!siz/k)
            return head;
        int n=siz/k;
        while(n--){
            int p=k;
            ListNode* temp=NULL;
            ListNode* ptr1=ptr;
            ListNode* ptr2=ptr;
            while(p--){
                ptr2=ptr1->next;
                ptr1->next=temp;
                temp=ptr1;
                ptr1=ptr2;
            }
            ptr->next=ptr1;
            if(temp2)
                temp2->next=temp;
            temp2=ptr;
            if(n==((siz/k)-1))
                head=temp;
            ptr=ptr1;
        }
        return head;
    }
};