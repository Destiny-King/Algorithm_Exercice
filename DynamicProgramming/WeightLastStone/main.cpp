//
// Created by Destiny on 2022/10/31.
//
#include "WeightLastStone.h"

int main() {
  system("chcp 65001");

  WeightLastStone weightLastStone;

  vector<int> nums = {2, 7, 4, 1, 8, 1};
  int ret = weightLastStone.lastStoneWeightII(nums);
  cout << ret << endl;

  return 0;
}