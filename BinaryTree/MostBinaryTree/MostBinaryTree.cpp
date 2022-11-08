//
// Created by Destiny on 2022/11/8.
//

#include "MostBinaryTree.h"

TreeNode *MostBinaryTree::traversal(vector<int> &nums, int left, int right) {
  if (left >= right)
    return nullptr;
  //分割点下标
  int maxValueIndex = left;
  for (int i = left + 1; i < right; ++i) {
    if (nums[i] > nums[maxValueIndex])
      maxValueIndex = i;
  }
  TreeNode *root = new TreeNode(nums[maxValueIndex]);
  //左闭右开
  root->left = traversal(nums, left, maxValueIndex);
  root->right = traversal(nums, maxValueIndex + 1, right);
  return root;
}

TreeNode *MostBinaryTree::constructMaximumBinaryTree(vector<int> &nums) {
  return traversal(nums, 0, nums.size());
}
