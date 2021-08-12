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
    
    unordered_map <int,int> ump;
    bool findTarget(TreeNode* root, int k) {
        inorder(root,k);
        for(auto x: ump)
        {
            int t = k-x.first;
            if(ump.find(t)!=ump.end() && x.first != t)
            {
                return true;
            }
            
        }
        return false;
        
    }
    
    void inorder(TreeNode* root, int k)
    {
        if(!root)
            return ;
        inorder(root->left,k);
        
        ump[root->val]++;
        
        inorder(root->right,k);
        
    }
    
};