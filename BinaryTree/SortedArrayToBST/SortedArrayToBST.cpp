//
// Created by Destiny on 2022/12/6.
//

#include "SortedArrayToBST.h"

TreeNode *SortedArrayToBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

TreeNode *SortedArrayToBST::sortedArrayToBST(vector<int> &nums) {
  return traversal(nums, 0, nums.size() - 1);
}

TreeNode *SortedArrayToBST::traversal(vector<int> &nums, int left, int right) {
  if (left > right)
    return nullptr;
  int mid = left + ((right - left) / 2);
  TreeNode *root = new TreeNode(nums[mid]);
  root->left = traversal(nums, left, mid - 1);
  root->right = traversal(nums, mid + 1, right);
  return root;
}
