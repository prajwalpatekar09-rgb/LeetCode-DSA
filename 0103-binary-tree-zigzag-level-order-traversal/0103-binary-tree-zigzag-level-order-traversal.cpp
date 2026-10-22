/**
 * Definition for a binary tree node.
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> row(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                int index;
                if (lefttoright == true) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }

                row[index] = node->val;

                if (node->left) {
                    q.push(node->left);
                }

                if (node->right) {
                    q.push(node->right);
                }
            }

            ans.push_back(row);
            lefttoright = !lefttoright;
        }

        return ans;
    }
};