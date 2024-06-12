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
    void reorderList(ListNode* head) {
        ListNode* curr=head;
        vector<int>v;
        vector<int>v1;
        vector<int>v2;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        v1=v;
        v2=v;
        reverse(v1.begin(),v1.end());
        int j=0;
        int k=0;
        for(int i=0;i<v2.size();i++){
            if(i%2==0){
                v2[i]=v[j];
                j++;
            }
            else{
                v2[i]=v1[k];
                k++;
            }
        }
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=v2[i];
            i++;
            curr=curr->next;
        }
    }
};