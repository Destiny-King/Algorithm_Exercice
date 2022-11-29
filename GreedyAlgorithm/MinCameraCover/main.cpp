//
// Created by Destiny on 2022/11/15.
//
#include "MinCameraCover.h"

int main() {
  system("chcp 65001");

  MinCameraCover minCameraCover;

  vector<int> nums = {1, 1, NULL, 1, 1};
  TreeNode *root = minCameraCover.createBTree(nums, 0);
  int ret = minCameraCover.minCameraCover(root);
  cout << ret << endl;

  return 0;
}