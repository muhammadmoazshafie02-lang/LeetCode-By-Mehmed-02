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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;

        if(root==nullptr)
        {
            return a;
        }

        vector<int> left = inorderTraversal(root->left);
        a.insert(a.end(), left.begin(), left.end());

        a.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);
        a.insert(a.end(), right.begin(), right.end());

        return a;
    }
};