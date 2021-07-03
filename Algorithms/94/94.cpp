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
    void in_order(TreeNode* root, vector<int>* data){
        if(root == NULL){
            return ;
        }
        if(root->left != NULL){
            in_order(root->left, data);
        }
        data->push_back(root->val);
        if(root->right != NULL){
            in_order(root->right, data);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> data = {};
        in_order(root, &data);
        return data;
    }
    
};