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
    vector<vector<int>> ans;
    int ts;
    void traversal(TreeNode * root,vector<int> path,int sum)
    {   
        if(root==NULL)
        {
            return;
        }
        path.push_back(root->val);
        if(sum+root->val==ts && root->right==NULL && root->left==NULL)
        {   
            ans.push_back(path);
            return;
        }
        traversal(root->left,path,sum+root->val);
        traversal(root->right,path,sum+root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ts=targetSum;
        vector<int> path;
        traversal(root,path,0);
        return ans;
    }
};