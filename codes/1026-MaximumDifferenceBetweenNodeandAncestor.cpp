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
    int max=INT_MIN;
    void traversal(TreeNode * root,int amin,int amax)
    {
        if(root==NULL)
        {
            return ;
        }
        int diff=abs(root->val-amax);
        if(diff>max)
        {
            max=diff;
        }
        diff=abs(root->val-amin);
        if(diff>max)
        {
            max=diff;
        }
        if(root->val<amin)
        {
            amin=root->val;
        }
        if(root->val>amax)
        {
            amax=root->val;
        }
        traversal(root->left,amin,amax);
        traversal(root->right,amin,amax);
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        set<int,greater<int>> db;
        traversal(root,root->val,root->val);
        return max;
    }
};