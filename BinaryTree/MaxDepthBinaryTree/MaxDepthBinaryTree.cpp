//
// Created by Destiny on 2022/10/14.
//

#include "MaxDepthBinaryTree.h"

//初始化二叉树
TreeNode *MaxDepthBinaryTree::initBTree(vector<int> &nums, int size) {
  if (size < 1) {
    return NULL;
  }
  //动态申请size大小的指针数组
  TreeNode **nodes = new TreeNode *[size];
  //将int数据转换为TreeNode节点
  for (int i = 0; i < size; i++) {
    if (nums[i] == 0) {
      nodes[i] = NULL;
    } else {
      nodes[i] = new TreeNode(nums[i]);
    }
  }
  queue<TreeNode *> nodeQueue;
  nodeQueue.push(nodes[0]);

  TreeNode *node;
  int index = 1;
  while (index < size) {
    node = nodeQueue.front();
    nodeQueue.pop();
    nodeQueue.push(nodes[index++]);
    node->left = nodeQueue.back();
    nodeQueue.push(nodes[index++]);
    node->right = nodeQueue.back();
  }
  return nodes[0];
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
