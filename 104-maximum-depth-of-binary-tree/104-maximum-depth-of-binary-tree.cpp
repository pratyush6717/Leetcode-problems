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
    int maxDepth(TreeNode* root) {
       if(root==NULL){
           return 0;
       }
       int count=0,maxm=INT_MIN;
        solve(root,count,maxm);
        return maxm;
    }
};