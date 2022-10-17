//
// Created by Destiny on 2022/10/17.
//

#include "BalantBinaryTree.h"

TreeNode *BalantBinaryTree::initBTree(vector<int> &nums, int size) {
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
