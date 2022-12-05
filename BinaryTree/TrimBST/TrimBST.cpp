//
// Created by Destiny on 2022/12/5.
//

#include "TrimBST.h"

TreeNode *TrimBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

TreeNode *TrimBST::trimBST(TreeNode *root, int low, int high) {
  if (root == nullptr)
    return nullptr;
  if (root->val < low)
    return trimBST(root->right, low, high);
  if (root->val > high)
    return trimBST(root->left, low, high);
  root->left = trimBST(root->left, low, high);
  root->right = trimBST(root->right, low, high);
  return root;
}
