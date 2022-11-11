//
// Created by Destiny on 2022/11/11.
//

#include "MinAbsdiffBST.h"

TreeNode *MinAbsdiffBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

int MinAbsdiffBST::getMinDiff(TreeNode *root) {
  traversal(root);
  return result;
}

void MinAbsdiffBST::traversal(TreeNode *cur) {
  if (cur == NULL)
    return;
  traversal(cur->left);
  if (pre != NULL) {
    result = min(result, cur->val - pre->val);
  }
  pre = cur;
  traversal(cur->right);
}
