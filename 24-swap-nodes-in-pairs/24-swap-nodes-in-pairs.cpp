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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;
        while(curr!=NULL){
            int x=curr->val;
            if(curr->next==NULL){
            return head;
            }
            int y=curr->next->val;
            curr->val=y;
            curr->next->val=x;
            curr=curr->next;
            curr=curr->next;
        }
        return head;
    }
};