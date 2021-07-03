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
    void helper(TreeNode* p, TreeNode* q, bool* isSame){
        if(*isSame == false){return;}
        if(p == NULL & q == NULL){return ;}
        if(p == NULL){
            *isSame = false;
            return;
        }
        if(q == NULL){
            *isSame = false;
            return;
        }
        if(p->val != q->val){
            *isSame = false;
            return;
        }
        helper(p->left, q->left, isSame);
        helper(p->right, q->right, isSame);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        helper(p,q,&ans);
        return ans;
    }
};