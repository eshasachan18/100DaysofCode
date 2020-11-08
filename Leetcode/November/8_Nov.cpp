Prob=https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/565/week-2-november-8th-november-14th/3524/
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
    int sum(TreeNode *root,int &tilt){
        if(!root)
            return 0;
        int l=sum(root->left,tilt);
        int r=sum(root->right,tilt);
        tilt+=abs(l-r);
        return l+r+(root->val);
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
        int a=sum(root,tilt);
        return tilt;
    }
        
};
