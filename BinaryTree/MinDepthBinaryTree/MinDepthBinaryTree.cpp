//
// Created by Destiny on 2022/10/14.
//

#include "MinDepthBinaryTree.h"

TreeNode *MinDepthBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

int MinDepthBinaryTree::minDepth(TreeNode *root) {
  if (root == NULL)
    return 0;
  if (root->left == NULL && root->right != NULL) {
    return 1 + minDepth(root->right);
  }
  if (root->left != NULL && root->right == NULL) {
    return 1 + minDepth(root->left);
  }
  return 1 + min(minDepth(root->left), minDepth(root->right));
}

//迭代法
int MinDepthBinaryTree::minDepth_Iteration(TreeNode *root) {
  if (root == NULL)
    return 0;
  int depth = 0;
  queue<TreeNode *> que;
  que.push(root);
  while (!que.empty()) {
    int size = que.size();
    depth++;
    for (int i = 0; i < size; ++i) {
      TreeNode *node = que.front();
      que.pop();
      if (node->left)
        que.push(node->left);
      if (node->right)
        que.push(node->right);
      if (!node->left && !node->right) {
        return depth;
      }
    }
  }
  return depth;
}
