//
// Created by Destiny on 2022/7/5.
//
#include "BalantBinaryTree.h"

int main() {
  system("chcp 65001");

  BalantBinaryTree balantBinaryTree;

  vector<int> nums = {3, 9, 20, NULL, NULL, 15, 7};
  TreeNode *root = balantBinaryTree.initBTree(nums, nums.size());
  cout << "头节点: " << root->val << endl;

  //递归法
  bool b = balantBinaryTree.isBalanced(root);
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}