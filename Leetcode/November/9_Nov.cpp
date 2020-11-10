Problem=https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
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
    int diff=0;
    int maxAncestorDiff(TreeNode* root) 
    {
        if(root==NULL){return 0;}
        func(root,root->val,root->val);
        return diff;
    }
    void func(TreeNode* root,int cmax,int cmin)
    {
        if(root==NULL){return;}
        diff=max(diff,max(abs(cmax-root->val),abs(root->val-cmin)));
         cmax=max(cmax,root->val);
        cmin=min(cmin,root->val);
        func(root->left,cmax,cmin);
        func(root->right,cmax,cmin);
        
        
    }
};
