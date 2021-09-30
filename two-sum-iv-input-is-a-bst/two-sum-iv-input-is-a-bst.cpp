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
    bool findTarget(TreeNode* root, int k) {
        unordered_set <int> comp;
        return explore(root,k,comp);
    }
    
    bool explore(TreeNode* root, int k,unordered_set<int>& comp){
        if(!root){
            return false;
        }
        if(comp.find(root->val) != comp.end()) return true;
        comp.insert(k-root->val);
        
        return explore(root->left,k,comp) || explore(root->right,k,comp);
        
    }
    
};