//
// Created by Destiny on 2022/7/5.
//
#include "FindBottomLeftValue.h"

int main() {
  system("chcp 65001");

  FindBottomLeftValue findBottomLeftValue;

  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  TreeNode *root = findBottomLeftValue.createBTree(nums, 0);
  cout << "头节点: " << root->val << endl;

  //递归法
  int ret = findBottomLeftValue.findBottomLeftValue(root);
  cout << ret << endl;

  //迭代法
  int ret2 = findBottomLeftValue.findBottomLeftValue_Iterative(root);
  cout << ret2 << endl;

  return 0;
}