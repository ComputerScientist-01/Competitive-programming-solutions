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

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int target)
    {
        return CalculatePathSum(root, target, 0);
    }

    bool CalculatePathSum(TreeNode *root, int target, int pathsum)
    {
        if (!root)
        {
            return false;
        }
        pathsum = pathsum + root->val;
        if (root->left == NULL && root->right == NULL)
        {
            if (target == pathsum)
                return true;
        }
        return CalculatePathSum(root->left, target, pathsum) || CalculatePathSum(root->right, target, pathsum);
    }
};