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
    bool findTarget(TreeNode* root, int k) {
        vector<int> sorted;
        if(!root) return false;
        
        inorder(root,sorted);
       return findsum(sorted,k);
    }
    
    //Returns the elements of BST in sorted order - Ascending
    void inorder(TreeNode *root, vector<int>& sorted) {        
        if(!root) return;
        
        inorder(root->left, sorted);
        sorted.push_back(root->val);
        inorder(root->right, sorted);
    }
    
    //Similar to two sum problem
    bool findsum(vector<int>& sorted, int k) {
        int i = 0, j = sorted.size() - 1;
        while(i < j) {
            if(sorted[i] + sorted[j] == k)
                return true;
            else if(sorted[i] + sorted[j] < k)
                ++i;
            else
                --j;
        }
        return false;
    }
};