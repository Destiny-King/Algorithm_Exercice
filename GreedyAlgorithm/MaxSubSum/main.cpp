//
// Created by Destiny on 2022/10/20.
//
#include "MaxSubSum.h"

int main() {
  system("chcp 65001");

  MaxSubSum maxSubSum;

  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int ret = maxSubSum.maxSubArray(nums);
  cout << ret << endl;

  return 0;
}