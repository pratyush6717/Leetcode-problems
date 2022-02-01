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
    void inorder(TreeNode*p,vector<int>&v){
        if(!p) 
        {
            v.push_back(-1);
            return;
        }
        v.push_back(p->val);
        inorder(p->left,v);
        inorder(p->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v;
        vector<int>v1;
        inorder(p,v);
        inorder(q,v1);
        if(v.size()!=v1.size()){
            return false;
        }
        for(int i=0;i<v.size();i++){
            
            if(v[i]!=v1[i]){
                return false;
            }
        }
        return true;
    }
};