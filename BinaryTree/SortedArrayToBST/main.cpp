//
// Created by Destiny on 2022/12/6.
//
#include "SortedArrayToBST.h"

int main() {
  system("chcp 65001");

  SortedArrayToBST sortedArrayToBst;

  vector<int> nums = {-10, -3, 0, 5, 9};
  // TreeNode *root = sortedArrayToBst.createBTree(nums, 0);

  TreeNode *ret = sortedArrayToBst.sortedArrayToBST(nums);
  cout << ret->val << endl;
  cout << ret->left->val << endl;
  cout << ret->right->val << endl;

  return 0;
}