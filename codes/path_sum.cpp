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
    void traversal(TreeNode * root,int sum,int targetSum)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL && (sum+root->val)==targetSum)
        {   ans=1;
            return;
            
        }
        traversal(root->left,sum+root->val,targetSum);
        traversal(root->right,sum+root->val,targetSum);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        traversal(root,0,targetSum);
            return ans;
        
    }
};