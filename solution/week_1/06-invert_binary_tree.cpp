// Given the root of a binary tree, invert the tree, and return its root.

// Input: root = [4,2,7,1,3,6,9]
// Output: [4,7,2,9,6,3,1]
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
    void convertLeefs(TreeNode* root) {
        if(root == NULL){
            return;
        }
        if(root->left != NULL){
            TreeNode* tmp = root->left;
            root->left = root->right;
            root->right = tmp;
        }
        else if(root->right != NULL){
            TreeNode* tmp = root->right;
            root->right = root->left;
            root->left = tmp;
        }
        convertLeefs(root->left);
        convertLeefs(root->right);

    }
    TreeNode* invertTree(TreeNode* root) {
        convertLeefs(root);
        return root;
        
    }
};