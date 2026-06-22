class Solution {
public:
    bool isSame(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)
            return true;

        if(p == NULL || q == NULL)
            return false;

        return p->val == q->val &&
               isSame(p->left, q->left) &&
               isSame(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        if(root == NULL)
            return false;

        if(isSame(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};