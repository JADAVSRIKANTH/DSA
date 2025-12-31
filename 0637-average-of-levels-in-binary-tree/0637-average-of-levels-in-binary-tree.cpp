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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root==NULL)
          return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> s;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
              int c=s.size();
              double s1=0.0;
              for(int x: s)
              {
                s1+=x;
              }
              s.clear();
              res.push_back(s1/c);
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
        return res;
    }
};