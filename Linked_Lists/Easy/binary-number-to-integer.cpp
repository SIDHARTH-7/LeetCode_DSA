/*** Definition for singly-linked list.*/
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=0;
        while(head!=NULL)
        {
            sum=sum*2+head->val;  //we could also use << left shift operator to multiply and then add
            head=head->next;
        }
        return sum;
    }
};