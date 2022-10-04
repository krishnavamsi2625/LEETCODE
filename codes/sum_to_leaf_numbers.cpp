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
    int ans=0;
    void traversal(TreeNode * root,vector<int> path)
    {   if(root==NULL)
        {
            return;
        }
        path.push_back(root->val);
        if(root->left==NULL &&root->right==NULL)
        {
            int t=0;
            for(auto x:path)
            {
                t=t*10+x;
            }
            
            ans+=t;
                
        }
        
        traversal(root->left,path);
        traversal(root->right,path);
        
    }
    int sumNumbers(TreeNode* root) 
    {   vector<int>path;
        traversal(root,path);
        
        return ans;
    }
};