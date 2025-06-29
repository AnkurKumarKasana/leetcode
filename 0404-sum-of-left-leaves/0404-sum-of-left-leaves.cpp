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
    void ans(TreeNode* root,int& sum,bool leftside){
        if (root==NULL)return;
        if(root->left==NULL && root->right==NULL && leftside){
            sum+=root->val;
            return;
        }
        ans(root->right,sum,false);
        ans(root->left,sum,true);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        ans(root,sum,false);
        return sum;
    }
};