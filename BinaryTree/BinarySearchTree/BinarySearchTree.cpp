//
// Created by Destiny on 2022/11/9.
//

#include "BinarySearchTree.h"

TreeNode *BinarySearchTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//递归法
TreeNode *BinarySearchTree::searchBST(TreeNode *root, int val) {
  if (root == NULL || root->val == val)
    return root;
  if (root->val > val)
    return searchBST(root->left, val);
  if (root->val < val)
    return searchBST(root->right, val);
  return NULL;
}

//迭代法
TreeNode *BinarySearchTree::searchBST_Interation(TreeNode *root, int val) {
  while (root != NULL) {
    if (root->val > val)
      root = root->left;
    else if (root->val < val)
      root = root->right;
    else
      return root;
  }
  return NULL;
}
