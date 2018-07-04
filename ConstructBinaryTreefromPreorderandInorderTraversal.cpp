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
    
    TreeNode* build(vector<int> &pre, vector<int> &in, int inS, int inE, int preS, int preE) {
        if (inS > inE || preS > preE) {
            return NULL;
        }
        TreeNode *root = new TreeNode(pre[preS]);
        
        int idx;
        for (int i = inS; i <= inE; ++i) {
            if (in[i] == pre[preS]) {
                idx = i;
                break;
            }
        }
        int lpreS = preS + 1;
        int linS = inS;
        int linE = idx - 1;
        int lpreE = linE - linS + lpreS;
        int rinS = idx + 1;
        int rinE = inE;
        int rpreS = lpreE + 1;
        int rpreE = preE;
        root -> left = build(pre, in, linS, linE, lpreS, lpreE);
        root -> right = build(pre, in, rinS, rinE, rpreS, rpreE);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {  
        return build(preorder, inorder, 0, preorder.size() - 1,0,  preorder.size() - 1);
    }
};