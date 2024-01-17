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
vector<int>ans;

void solve(TreeNode* node , int lvl){
    if(!node) return ;

    if(lvl==ans.size()) ans.push_back(node->val);

    solve(node->right,lvl+1);
    solve(node->left,lvl+1);
}

    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        solve(root,level);
        return ans;
    }
};