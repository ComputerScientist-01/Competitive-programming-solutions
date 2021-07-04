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
    int maxLevelSum(TreeNode *root)
    {
        int level = 1;
        int max = INT_MIN;
        int ans;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int SIZE = q.size();
            int sum = 0;

            while (SIZE--)
            {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;

                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }

            if (max < sum)
            {
                max = sum;
                ans = level;
            }

            level++;
        }
        return ans;
    }
};
