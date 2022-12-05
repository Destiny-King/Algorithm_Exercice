//
// Created by Destiny on 2022/12/5.
//
#include "TrimBST.h"

int main() {
  system("chcp 65001");

  TrimBST trimBst;

  vector<int> nums = {1, 0, 2};
  TreeNode *root = trimBst.createBTree(nums, 0);
  int low = 1;
  int high = 2;

  //递归法
  TreeNode *ret = trimBst.trimBST(root, low, high);
  cout << ret->val << endl;
  cout << ret->right->val << endl;

  return 0;
}