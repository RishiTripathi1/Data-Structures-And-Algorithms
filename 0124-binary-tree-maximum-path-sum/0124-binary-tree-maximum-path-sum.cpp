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

    int ans=INT_MIN;

    int mps(TreeNode* root){
        if(!root) return 0;

        int ls=max(0,mps(root->left));
        int rs=max(0,mps(root->right));

        ans = max(ans, ls+rs+root->val);

        return max(ls,rs)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        mps(root);
        return ans;
    }
};