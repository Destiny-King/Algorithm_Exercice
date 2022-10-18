//
// Created by Destiny on 2022/7/5.
//
#include "SumOfLeftLeaves.h"

int main() {
  system("chcp 65001");

  SumOfLeftLeaves sumOfLeftLeaves;

  vector<int> nums = {3, 9, 20, NULL, NULL, 15, 7};
  TreeNode *root = sumOfLeftLeaves.initBTree(nums, nums.size());
  cout << "头节点: " << root->val << endl;

  //递归法
  cout << "递归法: " << endl;
  int ret = sumOfLeftLeaves.sumOfLeftLeaves(root);
  cout << ret << endl;

  //迭代法
  cout << "迭代法: " << endl;
  int ret2 = sumOfLeftLeaves.sumOfLeftLeaves_Interation(root);
  cout << ret2 << endl;

  return 0;
}