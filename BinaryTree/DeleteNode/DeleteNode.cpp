//
// Created by Destiny on 2022/12/5.
//

#include "DeleteNode.h"

TreeNode *DeleteNode::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

TreeNode *DeleteNode::deleteNode(TreeNode *root, int key) {
  if (root == nullptr)
    return root;
  if (root->val == key) {
    if (root->left == nullptr && root->right == nullptr) {
      delete root;
      return nullptr;
    } else if (root->left == nullptr) {
      auto retNode = root->right;
      delete root;
      return retNode;
    } else if (root->right == nullptr) {
      auto retNode = root->left;
      delete root;
      return retNode;
    } else {
      TreeNode *cur = root->right;
      while (cur->left != nullptr) {
        cur = cur->left;
      }
      cur->left = root->left;
      TreeNode *tmp = root;
      root = root->right;
      delete tmp;
      return root;
    }
  }
  if (root->val > key)
    root->left = deleteNode(root->left, key);
  if (root->val < key)
    root->right = deleteNode(root->right, key);
  return root;
}
