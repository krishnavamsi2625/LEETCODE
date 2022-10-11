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
    void traverse(TreeNode * root,vector<int> &values)
    {
        if(root==NULL)
        {
            return;
        }
        traverse(root->left,values);
        values.push_back(root->val);
        traverse(root->right,values);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>values;
        traverse(root,values);
        for(int i=0;i<values.size()-1;i++)
        {
            if(values[i]>=values[i+1])
            {
                return 0;
            }
        }

            return 1;
        
    }
};