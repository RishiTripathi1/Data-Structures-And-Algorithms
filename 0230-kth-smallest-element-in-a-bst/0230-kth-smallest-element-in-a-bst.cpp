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

int ans;

void inorder(TreeNode*root,int &cnt,int k){
    if(!root) return;
    inorder(root->left,cnt,k);
    cnt++;
    if(cnt == k){
        ans = root->val;
        return;
    }
    inorder(root->right,cnt,k);
}
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        inorder(root,cnt,k);
        return ans;
    }
};