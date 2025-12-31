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
    bool checkBST(TreeNode* root, long long min_range,long long max_range)
    {
        if(root==NULL)
           return true;
        if((root->val<=min_range || root->val>=max_range))
           return false;
        return (checkBST(root->left,min_range,root->val)&& checkBST(root->right,root->val,max_range));
    }

public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
          return true;
        return checkBST(root,LLONG_MIN,LLONG_MAX);
    }
};