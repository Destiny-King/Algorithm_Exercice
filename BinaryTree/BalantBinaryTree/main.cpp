//
// Created by Destiny on 2022/7/5.
//
#include "BalantBinaryTree.h"

int main() {
  system("chcp 65001");

  BalantBinaryTree balantBinaryTree;

  vector<int> nums = {1, 2, 2, 3, 3, NULL, NULL, 4, 4};
  TreeNode *root = balantBinaryTree.createBTree(nums, 0);

  //递归法
  bool b = balantBinaryTree.isBalanced(root);
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}