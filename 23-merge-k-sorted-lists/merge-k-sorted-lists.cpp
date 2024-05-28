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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(int i=0;i<lists.size();i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                v.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* sortedlist=NULL;
        for(int i=0;i<v.size();i++){
        ListNode* temp= new ListNode(v[i]);
        temp->next=NULL;
        if(sortedlist==NULL){
            sortedlist=temp;
        }
        else{
            ListNode* head=sortedlist;
            while(head->next!=NULL){
                head=head->next;
            }
            head->next=temp;
        }
        }
        return sortedlist;
    }
};