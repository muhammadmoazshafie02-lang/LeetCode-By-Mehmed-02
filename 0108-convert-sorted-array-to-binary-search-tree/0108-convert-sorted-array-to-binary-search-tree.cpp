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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return BuildTree(nums,0,nums.size()-1);
    }
    TreeNode* BuildTree(vector<int>& nums,int Left,int Right) 
    {
        if (Left>Right)
        {
            return NULL;
        }
        int Mid = Left+(Right-Left)/2;
        TreeNode* Root=new TreeNode(nums[Mid]);
        Root->left=BuildTree(nums,Left,Mid-1);
        Root->right=BuildTree(nums,Mid + 1,Right);
        return Root;
    }
};