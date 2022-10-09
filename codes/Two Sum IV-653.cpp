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
    void inorder(TreeNode * root,vector<int>&elements)
    {   
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,elements);
        elements.push_back(root->val);
        inorder(root->right,elements);
    }
    bool findTarget(TreeNode* root, int k) {
        int sum=0;
        vector<int> elements;
        inorder(root,elements);
        int start=0,end=elements.size()-1;
        while(start<end)
        {   cout<<sum;
            sum=elements[start]+elements[end];
            if(sum==k)
            {
                return true;
            }
            if(sum>k)
            {
                end--;
            }
            else
            {
                start++; 
            }
        }
        return 0;
        
    }
};