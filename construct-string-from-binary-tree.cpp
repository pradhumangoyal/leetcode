class Solution {
public:
    string tree2str(TreeNode * root) {
        return !root ? "" : to_string(root->val) + (!root->left ? (!root->right ? "" : "()") : "(" + tree2str(root->left) + ")") + (!root->right ? "" : "(" + tree2str(root->right) + ")");
    }
};