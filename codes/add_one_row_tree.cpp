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
    void traversal(TreeNode *root,int depth,int val)
    {
        queue<TreeNode *>q;
        q.push(root);
        int level=1;
        TreeNode * temp;
        while(!q.empty() && level<depth-1)
        {   cout<<level<<":";
            int n=q.size();
            for(int i=0;i<n;i++)
            {   temp=q.front();
                cout<<temp->val<<" ";
                if(temp->left!=NULL)
                {
                    q.push((temp->left));
                }
                if(temp->right!=NULL)
                {
                    q.push((temp->right));
                }
                q.pop();
            }
            cout<<endl;
            level++;
        }
        
        int n=q.size();
        TreeNode *t1;
        TreeNode *t2;
        for(int i=0;i<n;i++)
        {
            t1=new TreeNode(val);
            t2=new TreeNode(val);
            temp=q.front();
            t1->left=temp->left;
            t2->right=temp->right;
            temp->left=t1;
            temp->right=t2;
            q.pop();
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {  if(depth==1)
        {
            TreeNode * t1=new TreeNode(val);
            t1->left=root;
            root=t1;
            return root;
        }
        traversal(root,depth,val);
       return root;
    }
};