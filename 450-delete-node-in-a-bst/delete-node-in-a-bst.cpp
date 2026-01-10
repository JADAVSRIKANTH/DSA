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
    TreeNode* find_min(TreeNode* root)
    {
    if(root==NULL)
        return NULL;
    if(root->left!=NULL)
        return find_min(root->left);
    return root;
    }
    TreeNode* deleteNode(TreeNode* root, int x) {
        if(root==NULL)
       return NULL;
        if(x<root->val)
        {
            root->left=deleteNode(root->left,x);
        }
        else if(x>root->val)
        {
            root->right=deleteNode(root->right,x);
        }
        else
        {
            if(root->left==NULL && root->right==NULL)//leaf node
            {
                delete root;
                return NULL;
            }
            else if(root->left==NULL || root->right==NULL)// single chile node
            {
                if(root->left==NULL)
                {
                TreeNode* temp=root->right;
                delete root;
                return temp;
                }
                else
                {
                TreeNode* temp=root->left;
                delete root;
                return temp;
                }
            }
            else
            {
            TreeNode* temp=find_min(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
            }
        }
        return root;    
    }
};