//
// Created by Destiny on 2022/11/29.
//

#include "MinCameraCover.h"

TreeNode *MinCameraCover::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

int MinCameraCover::minCameraCover(TreeNode *root) {
  result = 0;
  if (traversal(root) == 0) {
    result++;
  }
  return result;
}

int MinCameraCover::traversal(TreeNode *cur) {
  if (cur == NULL)
    return 2;
  int left = traversal(cur->left);
  int right = traversal(cur->right);
  if (left == 2 && right == 2)
    return 0;
  else if (left == 0 || right == 0) {
    result++;
    return 1;
  } else
    return 2;
}
