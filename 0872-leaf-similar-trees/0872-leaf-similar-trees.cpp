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

    void ans(TreeNode* root,vector<int>&r){
        if(!root) return ;
        if(!root->left && !root->right){
            r.push_back(root->val);
            return;
        }
        ans(root->left,r);
        ans(root->right,r);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>r1;
        vector<int>r2;

        ans(root1,r1);
        ans(root2,r2);

        return r1==r2;

    }
};