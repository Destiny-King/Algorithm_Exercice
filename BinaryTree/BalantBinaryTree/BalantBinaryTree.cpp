//
// Created by Destiny on 2022/10/17.
//

#include "BalantBinaryTree.h"

TreeNode *BalantBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

int BalantBinaryTree::getHeight(TreeNode *node) {
  if (node == NULL)
    return 0;
  int leftHeight = getHeight(node->left);
  if (leftHeight == -1)
    return -1;
  int rightHeight = getHeight(node->right);
  if (rightHeight == -1)
    return -1;
  //绝对值
  return abs(leftHeight - rightHeight) > 1 ? -1
                                           : 1 + max(leftHeight, rightHeight);
}

bool BalantBinaryTree::isBalanced(TreeNode *root) {
  return getHeight(root) == -1 ? false : true;
}
