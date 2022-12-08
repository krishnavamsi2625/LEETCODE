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
    void leafNode(TreeNode * head,vector<int>&db)
    {
        if(head==NULL)
        {
            return;
        }
        leafNode(head->left,db);
        if(head->left==NULL && head->right==NULL)
        {
            db.push_back(head->val);
        }
        leafNode(head->right,db);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> t1;
        vector<int> t2;
        leafNode(root1,t1);
        leafNode(root2,t2);
        if(t1.size()!=t2.size())
        {
            return 0;
        }
        int i=0;
        while(i<t1.size())
        {
            if(t1[i]!=t2[i])
            {
                return 0;
            }
            i++;
        }
       return 1;
    }
};