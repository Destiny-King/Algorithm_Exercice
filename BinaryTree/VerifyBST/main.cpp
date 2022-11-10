//
// Created by Destiny on 2022/11/10.
//
#include "VerifyBST.h"

int main() {
  system("chcp 65001");

  VerifyBST verifyBst;

  vector<int> nums = {5, 1, 4, NULL, NULL, 3, 6};
  TreeNode *root = verifyBst.createBTree(nums, 0);

  //递归法
  bool ret = verifyBst.isValidBST_Interation(root);
  if (ret == 0) {
    cout << "false" << endl;
  } else if (ret == 1) {
    cout << "true" << endl;
  }

  return 0;
}