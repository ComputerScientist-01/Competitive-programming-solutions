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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        
        if(targetSum==root->val and !root->right and !root->left)
            return true;
        
        if(hasPathSum(root->left,targetSum-root->val)) 
            return true;
        if(hasPathSum(root->right,targetSum-root->val)) 
            return true;
        
        return false;
    }
};