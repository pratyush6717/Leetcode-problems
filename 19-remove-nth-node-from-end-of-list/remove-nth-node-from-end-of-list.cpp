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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int size=0;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        n=size-n;
        n--;
        curr=head;
        while(n>0){
            n--;
            curr=curr->next;
        }
        if(n<0){
            return head->next;
        }
        ListNode* next=curr->next->next;
        curr->next=next;
        //cout<<head->val<<endl;
        return head;
    }
};