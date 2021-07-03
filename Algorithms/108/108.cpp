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
    TreeNode* helper(vector<int> nums, int index){
        if(index >= nums.size()){
            return NULL;
        }
        return &TreeNode(nums[index],helper(nums,2*index+1),helper(nums,2*index+2));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(*nums,0);
    }
};