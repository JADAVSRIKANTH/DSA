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
    vector<int> s;
    void postorder(TreeNode* root)
    {
        if(root==NULL)
         return;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        s.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return s;
    }
};