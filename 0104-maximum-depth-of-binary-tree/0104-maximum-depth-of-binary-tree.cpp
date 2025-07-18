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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>>ans;
        q.push(root);
        if(root==NULL)return 0;

        while(!q.empty()){
            vector<int> level;
            int size= q.size();
            for(int i=0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();
            level.push_back(temp->val);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            }
            ans.push_back(level);
        }return ans.size();
    }
};