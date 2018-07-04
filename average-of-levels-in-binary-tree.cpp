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
    vector<double> averageOfLevels(TreeNode* root) {
        double count, sum;
        queue<TreeNode*> q;
        q.push(root);
        vector <double> ans;
        while(!q.empty()) {
            int t = q.size();
            count = 0;
            sum = 0;
            while(t--) {
                TreeNode* front = q.front();
            q.pop();
                sum += front -> val;
                count++;
                if (front -> left) q.push(front -> left);
                if (front -> right) q.push(front -> right);
            }
            ans.push_back((1.0 * sum) / count);
        }
        return ans;
    }
};