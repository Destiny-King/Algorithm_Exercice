//
// Created by Destiny on 2022/7/5.
//
#include "MinDepthBinaryTree.h"

int main() {
  system("chcp 65001");

  MinDepthBinaryTree minDepthBinaryTree;

  vector<int> nums = {3, 9, 20, NULL, NULL, 15, 7};
  TreeNode *root = minDepthBinaryTree.initBTree(nums, nums.size());

  int ret = minDepthBinaryTree.minDepth(root);
  cout << ret << endl;

  int ret2 = minDepthBinaryTree.minDepth_Iteration(root);
  cout << ret2 << endl;

  return 0;
}