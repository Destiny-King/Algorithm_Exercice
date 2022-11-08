//
// Created by Destiny on 2022/10/15.
//

#include "NodeNumBinaryTree.h"

TreeNode *NodeNumBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//递归法
int NodeNumBinaryTree::countNode(TreeNode *root) {
  if (root == NULL)
    return 0;

  return 1 + countNode(root->left) + countNode(root->right);
}

//迭代法
int NodeNumBinaryTree::countNode_Iteration(TreeNode *root) {
  queue<TreeNode *> que;
  if (root != NULL)
    que.push(root);
  int result = 0;
  while (!que.empty()) {
    int size = que.size();
    for (int i = 0; i < size; ++i) {
      TreeNode *node = que.front();
      que.pop();
      result++;
      if (node->left)
        que.push(node->left);
      if (node->right)
        que.push(node->right);
    }
  }

  return result;
}

//完全二叉树递归法
int NodeNumBinaryTree::countNodes(TreeNode *root) {
  if (root == NULL)
    return 0;
  TreeNode *left = root->left;
  TreeNode *right = root->right;
  int leftDepth = 0, rightDepth = 0;
  while (left) {
    left = left->left;
    leftDepth++;
  }
  while (right) {
    right = right->right;
    rightDepth++;
  }
  if (leftDepth == rightDepth) {
    return (2 << leftDepth) - 1;
  }
  return countNodes(root->left) + countNodes(root->right) + 1;
}
