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
    int maxProduct(TreeNode* root) 
    {
        long long int total=totalSum(root);
        long long int ans=0;
        productMax(root,total,ans);
        return ans%1000000007;
    }
    long long int totalSum(TreeNode * head)
    {
        if(head==NULL)
        {
            return 0;
        }
        return totalSum(head->left)+totalSum(head->right)+head->val;
    }
    int productMax(TreeNode * head,long long int total,long long int & ans)
    {
        if(head==NULL)
        {
            return 0;
        }
        int sub_tree=0;
        sub_tree+=productMax(head->left,total,ans);
        sub_tree+=productMax(head->right,total,ans);
        sub_tree+=head->val;
        unsigned long long int temp=(total-sub_tree)*sub_tree;
        if(temp>ans)
        {
            ans=temp;
        }
        return sub_tree;
    }
};