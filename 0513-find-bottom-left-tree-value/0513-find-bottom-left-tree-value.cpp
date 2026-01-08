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
    int findBottomLeftValue(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
           return root->val;
        queue<TreeNode*> q;
        vector<int> d;
        q.push(root);
        q.push(NULL);
        int res=-1;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                //res=d.front();
                d.clear();
                if(!q.empty())
                   q.push(NULL);
                continue;
            }
            if(curr->left)
               q.push(curr->left);
            if(curr->right)
               q.push(curr->right);
            d.push_back(curr->val);
        } 
        return d[0]; 
    }
};