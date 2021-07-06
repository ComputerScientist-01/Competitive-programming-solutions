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
    vector<double> averageOfLevels(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<double> ans;

        if (!root)
            return ans;
        q.push(root);
        ans.push_back(root->val);
        int currlvl = 0;
        double sum, avg;

        //q.push(NULL);

        while (!q.empty())
        {
            sum = 0;
            currlvl = 0;

            int sz = q.size();
            while (sz--)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left)
                {
                    q.push(node->left);
                    sum += node->left->val;
                    currlvl += 1;
                }
                if (node->right)
                {
                    q.push(node->right);
                    sum += node->right->val;
                    currlvl += 1;
                }
            }
            if (currlvl > 0)
            {

                ans.push_back(sum / currlvl);
            }
        }

        return ans;
    }
};