/* Given a binary tree, determine if it is 
height-balanced
.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true */
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
    int maxDepth(TreeNode* root){
        
        if(root == NULL) return 0;
        
        return max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int left = 0;
        int right = 0;

        left = maxDepth(root->left);
        right = maxDepth(root->right);
        
        int diff=abs(left-right);
        bool leftLeef =isBalanced(root->left);
        bool rightLeef =isBalanced(root->right);
        return (diff<=1&&leftLeef&&rightLeef);
    }
};