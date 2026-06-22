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
    int depth=0;
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int leftdepth=0;
        int rightdepth=0;
        if(root->left!=NULL)
        {
            leftdepth++;
        }
        if(root->right!=NULL)
        {
            rightdepth++;
        }
        
        

        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    
    }
};
