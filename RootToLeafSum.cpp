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
    int sumNumbers(TreeNode* root) {
        int currSum=0;

        return sumNodes(root, currSum);
    }

    int sumNodes(TreeNode* root, int currSum)
    {
        if(root==NULL)
            return 0;
        currSum=currSum*10+root->val;
        if(root->left==NULL && root->right==NULL)
            return currSum;

        int leftSum=sumNodes(root->left, currSum);
        int rightSum=sumNodes(root->right, currSum);
        return leftSum+rightSum;
    }
};