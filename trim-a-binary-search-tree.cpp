/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL)
            return root;
        root -> left = trimBST(root -> left, L, R);
        root -> right = trimBST(root -> right, L, R);
        if (root -> val > R) {
            root ->  right = NULL;
            root = root -> left;
        }
        else if (root -> val < L) {
            root -> left = NULL;
            root = root -> right;
        }
        return root;   
    }
    
};