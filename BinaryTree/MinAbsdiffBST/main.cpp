//
// Created by Destiny on 2022/11/11.
//
#include "MinAbsdiffBST.h"

int main() {
  system("chcp 65001");

  MinAbsdiffBST minAbsdiffBst;

  vector<int> nums = {1, 0, 48, NULL, NULL, 12, 49};
  TreeNode *root = minAbsdiffBst.createBTree(nums, 0);

  int ret = minAbsdiffBst.getMinDiff(root);
  cout << ret << endl;

  return 0;
}