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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int>a;
        ans(root,a);
        return a;        
    }
    void ans(TreeNode* root,vector<int>&a){
        if(root==NULL)return ;
        ans (root->left,a);
        a.push_back(root->val);
        ans(root->right,a);
    }
};