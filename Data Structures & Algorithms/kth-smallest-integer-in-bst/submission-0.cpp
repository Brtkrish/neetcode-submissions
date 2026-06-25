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
    void traverse(TreeNode* root,vector<int> &result)
        {
            if(root==nullptr)
            {
                return ;
            }

            traverse(root->left,result);
            result.push_back(root->val);
            traverse(root->right,result);

        }

    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> sorted;
        
        traverse(root,sorted);
        return sorted[k-1];

    }
};
