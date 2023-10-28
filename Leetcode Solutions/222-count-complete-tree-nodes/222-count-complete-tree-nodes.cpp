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
    // This function, 'countNodes', counts the number of nodes in a binary tree given its root node.

    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;  // If the tree is empty (root is NULL), return 0.
        }

        queue<TreeNode*> q;  // Create a queue to perform level-order traversal.
        q.push(root);  // Enqueue the root node to start the traversal.

        int count = 0;  // Initialize a count to keep track of the number of nodes.

        // Perform a level-order traversal of the binary tree.
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();  // Dequeue the current node.

            count++;  // Increment the count for the current node.

            // Enqueue the left and right child nodes if they exist.
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }

        return count;  // Return the total number of nodes in the binary tree.
    }
};
