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
    bool isSametree(TreeNode* s, TreeNode* t){
       //if any of the tree is null then there is no need to compare 
       if(!s || !t){
           //if either of them are null both of them need to be null to be true
           return s==NULL && t==NULL;
       } //now since both are not null check if they have same value otherwise return false
       else if(s->val == t->val){
           //if value is same then check if both its left and right sub-tree are same          
           return isSametree(s->left,t->left) && isSametree(s->right,t->right);
       }
       else{
           return false;
       }
   }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
          if(!root){
             //if main tree is null then return false
             return false;
         } 
        else if(isSametree(root,subRoot)){
             //check if s and t are same, if yes return true
             return true;
         }
        else{
         return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        }
    }
};