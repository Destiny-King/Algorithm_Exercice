//
// Created by Destiny on 2022/10/14.
//

#include "MaxDepthBinaryTree.h"

//初始化二叉树
TreeNode *MaxDepthBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//递归法
int MaxDepthBinaryTree::maxdepth(TreeNode *root) {
  if (root == NULL)
    return 0;
  return 1 + max(maxdepth(root->left), maxdepth(root->right));
}

//迭代法
int MaxDepthBinaryTree::maxdepth_Iteration(TreeNode *root) {
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
    }
  }
  return depth;
}
