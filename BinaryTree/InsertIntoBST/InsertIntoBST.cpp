//
// Created by Destiny on 2022/12/3.
//

#include "InsertIntoBST.h"

TreeNode *InsertIntoBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

TreeNode *InsertIntoBST::insertIntoBST(TreeNode *root, int val) {
  if (root == NULL) {
    TreeNode *node = new TreeNode(val);
    return node;
  }
  if (root->val > val)
    root->left = insertIntoBST(root->left, val);
  if (root->val < val)
    root->right = insertIntoBST(root->right, val);
  return root;
}
