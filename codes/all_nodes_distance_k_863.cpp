/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int flag=0;
    int level;
    map<TreeNode*,TreeNode*>db;
    map<TreeNode*,bool>visited;
    void traverse(TreeNode *root)
    {   
        if(root==NULL)
        {
            return;
        }
        visited[root]=false;
        if(root->left!=NULL)
        db[root->left]=root;
        if(root->right!=NULL)
        db[root->right]=root;
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        traverse(root);
        queue<TreeNode *> q;
        int i=0;
        q.push(target);
        visited[target]=true;
        while(!q.empty())
        {   
            TreeNode * temp;
            if(i>k)
            {
                break;
            }
            int n=q.size();
            for(int j=0;j<n;j++)
            {
                temp=q.front();
                if(i==k &&temp!=NULL)
                {
                    ans.push_back(temp->val);
                    q.pop();
                    continue;
                }
                if(temp!=NULL &&!visited[temp->left])
                {
                    visited[temp->left]=true;
                    q.push(temp->left);
                }
                if(temp!=NULL&&!visited[temp->right])
                {
                    visited[temp->right]=true;
                    q.push(temp->right);
                }
                if(temp!=NULL &&!visited[db[temp]])
                {
                    visited[db[temp]]=true;
                    q.push(db[temp]);
                }
                q.pop();
                
            }
            i++;
            
        }
        
        return ans;
    }
};