//
// Created by Destiny on 2022/11/3.
//
#include "LargestSumAfterKNegations.h"

int main() {
  system("chcp 65001");

  LargestSumAfterKNegations largestSumAfterKNegations;

  vector<int> nums = {3, -1, 0, 2};
  int k = 3;
  int ret = largestSumAfterKNegations.largestSumAfterKNegations(nums, k);
  cout << ret << endl;

  return 0;
}