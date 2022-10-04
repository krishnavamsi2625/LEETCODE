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
class Solution 
{
public:
    string min="zzz";
    map<int,char> db;
    void traversal(TreeNode* root,stack<int> s)
    {
        if(root==NULL)
        {
            return;
        }
        s.push(root->val);
        if(root->left==NULL && root->right==NULL)
        {   string st="";
            while(!s.empty())
            {   
                st+=db[s.top()];
                s.pop();
            }
            if(st<min)
            {
                min=st;
            }
            cout<<st<<endl;
        }
        traversal(root->left,s);
        traversal(root->right,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        char ch='a';
        for(int i=0;i<26;i++)
        {
            db[i]=ch;
            ch++;
        }
        stack<int> s;
        traversal(root,s);
        return min;
        
    }
};