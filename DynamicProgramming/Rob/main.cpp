//
// Created by Destiny on 2022/10/31.
//
#include "Rob.h"

int main() {
  system("chcp 65001");

  Rob rob;

  vector<int> nums = {2, 7, 9, 3, 1};
  int ret = rob.rob(nums);
  cout << ret << endl;

  int ret2 = rob.rob2(nums);
  cout << ret2 << endl;

  vector<int> nums2 = {3, 2, 3, NULL, 3, NULL, 1};
  TreeNode *head = rob.createBTree(nums2, 0);
  int ret3 = rob.rob3(head);
  cout << ret3 << endl;

  return 0;
}