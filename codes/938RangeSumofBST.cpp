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
    int Low,High,sum=0;
    void inorder(TreeNode *head)
    {
        if(head==NULL)
        {
            return;
        }
        inorder(head->left);
        if(head->val>=Low&&head->val<=High)
        {
            sum+=(head->val);
            cout<<head->val<<":";
        }
        
        inorder(head->right);
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
     Low=low;
     High=high;
     inorder(root);
     //cout<<sum;
     return sum;

    }
};