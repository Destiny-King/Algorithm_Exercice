//
// Created by Destiny on 2022/10/31.
//
#include "FindTargetSumWays.h"

int main() {
  system("chcp 65001");

  FindTargetSumWays findTargetSumWays;

  vector<int> nums = {1, 1, 1, 1, 1};
  int S = 3;
  int ret = findTargetSumWays.findTargetSumWays(nums, S);
  cout << ret << endl;

  return 0;
}