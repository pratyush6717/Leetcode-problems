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
    TreeNode* build(vector<int>& v,int s,int e,TreeNode* root){
        if(s>e){
            return NULL;
        }
        int m=(s+e)/2;
        root=new TreeNode(v[m]);
        root->left=build(v,s,m-1,root);
        root->right=build(v,m+1,e,root);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root= build(nums,0,nums.size()-1,root);
        return root;
    }
};