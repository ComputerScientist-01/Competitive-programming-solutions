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
    bool isValidBST(TreeNode* root) {
        if(!root)
            return false;
        inOrder(root);
        
     
    for (int i = 1; i < arr.size(); i++){
        // Unsorted pair found
        if (arr[i - 1] >= arr[i])
            return false;
    }
    // No unsorted pair found
    return true;
    }
    
    void inOrder(TreeNode* root){
        if(!root)
            return;
        inOrder(root->left);
        arr.push_back(root->val);
        inOrder(root->right);
    }
private:
    vector <int> arr;
};