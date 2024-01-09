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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool flag=true;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int>output(levelsize);

            for(int i=0; i<levelsize ;i++){
                TreeNode* front = q.front();
                q.pop();

                int check = (flag) ? i:(levelsize-1-i);

                output[check]=front->val;

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);

            }

            flag =! flag;
            ans.push_back(output);
        }
        return ans;
    }
};