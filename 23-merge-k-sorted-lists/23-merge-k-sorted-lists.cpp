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
    void insertAtEnd(ListNode* &head,int data){
    if(head==NULL){
        head = new ListNode(data);
        return;
    }
   
    ListNode* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next= new ListNode(data);
}
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
        ListNode* result=NULL;
        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<" ";
            insertAtEnd(result,v[i]);
        }
        return result;
    }
};