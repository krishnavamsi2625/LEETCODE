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
    int ans=INT_MIN;
    int max(int a,int b)
    {
        return (a>b)?a:b;
    }
    int traversal(TreeNode *head)
    {
        if(head==NULL)
        {
            return 0;
        }
        int l=traversal(head->left);
        int r=traversal(head->right);
        l=max(l,0);
        r=max(r,0);
        int cur=head->val;
        cur=cur+l+r;
        if(cur>ans)
        {
            ans=cur;
        }
        return head->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) 
    {
       traversal(root);
       //cout<<max;
       return ans;
    }
};