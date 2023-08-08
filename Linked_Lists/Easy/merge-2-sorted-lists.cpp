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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        if(list1->val>list2->val)
            swap(ptr1,ptr2);
        ListNode* sol=ptr1;
        while(ptr1!=NULL && ptr2!=NULL){
            ListNode* ptr=NULL;
            while(ptr1!=NULL && ptr1->val <= ptr2->val){
                ptr=ptr1;
                ptr1=ptr1->next;
            }
            ptr->next=ptr2;
            swap(ptr1,ptr2);
        }
        return sol;
    }
};