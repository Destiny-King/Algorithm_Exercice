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

  return 0;
}