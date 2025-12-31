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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> s;
        if(!root)
          return s;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> d;
        int i=0;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                if(i%2!=0)
                {

                  reverse(d.begin(),d.end());
                  s.push_back(d);
                  //s.insert(s.end(),d.begin(),d.end());
                }
                else
                {
                s.push_back(d);
                }
                d.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
                i++;
                //continue;
            }
            else
            {
            if(curr->left)
            {
                q.push(curr->left);
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
            d.push_back(curr->val);
            }
            
        }
        return s;
        
        
    }
};