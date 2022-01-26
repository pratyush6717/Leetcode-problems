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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        queue<TreeNode*>q;
        if(root1!=NULL)
        q.push(root1);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            v.push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        if(root2!=NULL)
        q.push(root2);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            v.push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};