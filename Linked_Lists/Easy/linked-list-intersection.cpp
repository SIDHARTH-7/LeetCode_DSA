class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1=headA;
        ListNode* l2=headB;
        if(l1==NULL || l2==NULL)
            return NULL;
        while(l2->next!=NULL)
            l2=l2->next;
        ListNode* temp=l2;
        temp->next=headB;
        l2=headA;
        while(l1!=NULL && l2!=NULL && l2->next!=NULL){
            l1=l1->next;
            l2=l2->next->next;
            if(l1==l2){
               break; 
            }
        }
        if(l1!=l2 || l1->next==NULL || l2->next==NULL){
            temp->next=NULL;
            return NULL;
        }
        l1=headA;
        while(l1!=l2){
            l1=l1->next;
            l2=l2->next;
        }
        temp->next=NULL;
        return l1;
    }
};