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
    bool isSame(TreeNode* abc,TreeNode* xyz ) {
        if( abc == nullptr && xyz == nullptr) {
            return true;
        }
        if( abc == nullptr || xyz == nullptr) {
            return false;
        }
        if(abc->val != xyz->val)
            return false;
        
        return isSame(abc->left, xyz->left) && isSame(abc->right, xyz->right);
    
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if( root == nullptr) {
            return false;
        }

        if(isSame(root, subRoot)) {
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};