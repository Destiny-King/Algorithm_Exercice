//
// Created by Destiny on 2022/7/5.
//
#include "InsertIntoBST.h"

int main() {
  system("chcp 65001");

  InsertIntoBST insertIntoBst;

  vector<int> nums = {4, 2, 7, 1, 3};
  TreeNode *root = insertIntoBst.createBTree(nums, 0);
  int val = 5;

  TreeNode *ret = insertIntoBst.insertIntoBST(root, val);
  cout << ret->val << endl;

  return 0;
}