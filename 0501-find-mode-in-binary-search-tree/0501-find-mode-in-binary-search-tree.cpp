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
    vector<int> result;
    int currentvalue=0;
    int currentcount=0;
    int maxcount=0;
    bool hasprevious=false;
    void inorder(TreeNode* root) 
    {
        if(root==nullptr) 
        {
            return;
        }
        inorder(root->left);
        if(hasprevious==false||root->val!=currentvalue) 
        {
            currentvalue=root->val;
            currentcount=1;
            hasprevious=true;
        }
        else 
        {
            currentcount++;
        }
        if(currentcount>maxcount) 
        {
            maxcount=currentcount;
            result.clear();
            result.push_back(currentvalue);
        }
        else if(currentcount==maxcount) 
        {
            result.push_back(currentvalue);
        }
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        result.clear();
        currentvalue=0;
        currentcount=0;
        maxcount=0;
        hasprevious=false;
        inorder(root);
        return result;
    }
};
