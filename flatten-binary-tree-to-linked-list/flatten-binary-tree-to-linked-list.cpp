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
    TreeNode* List;
    void flatten(TreeNode* root) {
    if(!root)
    {
        return;
    }
        TreeNode* rt=root->right;
        TreeNode* lt=root->left;
        if(List != NULL)
        {
            List->right=root;
            List->left=NULL;
        }
    
        
        List=root;
        flatten(lt);
        flatten(rt);
       
        
        
    }
};