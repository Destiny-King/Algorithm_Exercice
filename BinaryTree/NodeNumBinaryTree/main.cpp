//
// Created by Destiny on 2022/7/5.
//
#include "NodeNumBinaryTree.h"

int main() {
  system("chcp 65001");

  NodeNumBinaryTree nodeNumBinaryTree;

  vector<int> nums = {1, 2, 2, 3, 4, 4, 3};
  TreeNode *root = nodeNumBinaryTree.createBTree(nums, 0);

  int ret = nodeNumBinaryTree.countNode(root);
  cout << ret << endl;

  int ret2 = nodeNumBinaryTree.countNode_Iteration(root);
  cout << ret2 << endl;

  int ret3 = nodeNumBinaryTree.countNodes(root);
  cout << ret3 << endl;

  return 0;
}