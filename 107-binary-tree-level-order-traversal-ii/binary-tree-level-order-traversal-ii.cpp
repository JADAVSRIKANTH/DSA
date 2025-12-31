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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
          return res;
        queue<TreeNode*> q;
        vector<int> s;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                res.push_back(s);
                s.clear();
                if(!q.empty())
                   q.push(NULL);
                continue;
            }
            if(curr->left)
              q.push(curr->left);
            if(curr->right)
              q.push(curr->right);
            s.push_back(curr->val);
        }
        vector<vector<int>> res1;
        for(int i=res.size()-1;i>=0;i--)
        {
          res1.push_back(res[i]);
        }
        return res1;
    }
};