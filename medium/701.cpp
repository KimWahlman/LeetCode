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
    TreeNode* pInsertIntoBST(TreeNode* node, int val)
    {
        if(val < node->val) {
            if(node->left != nullptr)
                pInsertIntoBST(node->left, val);
            else
                node->left = new TreeNode(val);
        } else if(val > node->val) {
            if(node->right != nullptr)
                pInsertIntoBST(node->right, val);
            else
                node->right = new TreeNode(val);
        }
        return node;
    }
    
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr) return new TreeNode(0);
        pInsertIntoBST(root, val);
        return root;
    }
};
