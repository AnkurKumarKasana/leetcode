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
    bool same(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;

        return(p->val==q->val)&& same(p->left,q->left)&& same(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL)return true;
        if(root==NULL)return false;
        if(same(root,subRoot))return true;
        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
    }
};