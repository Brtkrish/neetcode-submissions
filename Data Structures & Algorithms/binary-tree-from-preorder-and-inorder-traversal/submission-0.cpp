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

    TreeNode* build(vector<int> &preorder, int prestart,int preend,vector<int> &inorder,int instart,int inend)
    {
        if(prestart>preend || instart>inend)
        {
            return nullptr;
        }
        TreeNode *root=new TreeNode(preorder[prestart]);
        int rootindex;
        for(int i=instart;i<=inend;i++)
        {
            if(inorder[i]==preorder[prestart])
            {
                rootindex=i;
                break;
            }
        }
        int leftSize = rootindex - instart;
        root->left=build(preorder,prestart+1,prestart + leftSize,inorder,instart,rootindex-1);
        root->right=build(preorder,prestart+leftSize+1,preend,inorder,rootindex+1,inend);
        return root;

    } 
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prestart=0;
        int preend=preorder.size()-1;
        int instart=0;
        int inend=inorder.size()-1;

        TreeNode* root=build(preorder,prestart,preend,inorder,instart,inend);
        return root;
    }
};
