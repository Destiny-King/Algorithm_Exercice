//
// Created by Destiny on 2022/12/6.
//

#include "ConvertBST.h"

ConvertBST::ConvertBST() { pre = 0; }

TreeNode *ConvertBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

void ConvertBST::traversal(TreeNode *cur) {
  if (cur == NULL)
    return;
  traversal(cur->right);
  cur->val += pre;
  pre = cur->val;
  traversal(cur->left);
}

TreeNode *ConvertBST::convertBST(TreeNode *root) {
  traversal(root);
  return root;
}
