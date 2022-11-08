//
// Created by Destiny on 2022/11/7.
//
#include "MostBinaryTree.h"

int main() {
  system("chcp 65001");

  MostBinaryTree mostBinaryTree;

  //递归法
  vector<int> nums = {3, 2, 1, 6, 0, 5};
  TreeNode *ret = mostBinaryTree.constructMaximumBinaryTree(nums);
  cout << ret->val << endl;

  return 0;
}