//
// Created by Destiny on 2022/11/11.
//
#include "FindMode.h"

int main() {
  system("chcp 65001");

  FindMode findMode;

  vector<int> nums = {1, NULL, 2, NULL, NULL, 2, NULL};
  TreeNode *root = findMode.createBTree(nums, 0);

  vector<int> ret = findMode.findMode(root);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}