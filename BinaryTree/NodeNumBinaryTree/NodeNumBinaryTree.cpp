//
// Created by Destiny on 2022/10/15.
//

#include "NodeNumBinaryTree.h"

TreeNode *NodeNumBinaryTree::initBTree(vector<int> &nums, int size) {
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
