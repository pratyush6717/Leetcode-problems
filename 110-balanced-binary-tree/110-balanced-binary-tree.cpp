/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,int count,int& maxm){
        if(root==NULL){
            maxm=max(maxm,count);
            count=0;
            return;
        }
        count++;
        solve(root->left,count,maxm);
        solve(root->right,count,maxm);
        
    }
    bool isBalanced(TreeNode* root) {
         if(root==NULL){
           return 1;
       }
        queue<TreeNode*>q;
        q.push(root);
        //int maxm1=INT_MIN;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
           int count=0,maxm=INT_MIN;
           solve(curr->left,count,maxm);
            int ld=maxm;
            count=0,maxm=INT_MIN;
            solve(curr->right,count,maxm);
            int rd=maxm;
            //maxm1=max(maxm1,ld+rd);
            if(abs(ld-rd)>1){
                return false;
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return true;
    }
};