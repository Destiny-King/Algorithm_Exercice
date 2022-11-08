//
// Created by Destiny on 2022/7/5.
//
#include "MaxDepthBinaryTree.h"

int main() {
  system("chcp 65001");

  MaxDepthBinaryTree maxDepthBinaryTree;

  vector<int> nums = {1, 2, 2, 3, 4, 4, 3};
  TreeNode *root = maxDepthBinaryTree.createBTree(nums, 0);

  int ret = maxDepthBinaryTree.maxdepth(root);
  cout << ret << endl;

  int ret2 = maxDepthBinaryTree.maxdepth_Iteration(root);
  cout << ret2 << endl;

  return 0;
}