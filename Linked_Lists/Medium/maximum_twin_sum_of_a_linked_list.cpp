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
    int pairSum(ListNode* head) {
        vector<int> arr;
        int count=1,ans=0;
        ListNode* ptr=head;
        arr.push_back(head->val);
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            arr.push_back(ptr->val);
            count++;
        }    
        for(int i=0;i<count/2;i++)
        {
            ans= (arr[i]+arr[count-i-1])>ans?arr[i]+arr[count-i-1]:ans;
        }
        return ans;
    }
};