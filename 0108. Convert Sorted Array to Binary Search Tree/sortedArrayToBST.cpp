#include <iostream>
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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        if (nums.empty()) return NULL;
        int mid = nums.size()/2;
        
        TreeNode *tre = new TreeNode(nums[mid]);
        vector<int> left(nums.begin(),nums.begin() + mid);
        vector<int> right(nums.begin() + mid + 1, nums.end());
        
        tre->left = sortedArrayToBST(left);
        tre->right = sortedArrayToBST(right);
        return tre;
    }
    
};