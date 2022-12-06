//
// Created by Destiny on 2022/12/6.
//
#include "ConvertBST.h"

int main() {
  system("chcp 65001");

  ConvertBST convertBst;

  vector<int> nums = {4,    1,    6, 0,    2,    5,    7, NULL,
                      NULL, NULL, 3, NULL, NULL, NULL, 8};
  TreeNode *root = convertBst.createBTree(nums, 0);

  TreeNode *ret = convertBst.convertBST(root);
  cout << ret->val << endl;
  cout << ret->left->val << endl;
  cout << ret->right->val << endl;

  return 0;
}