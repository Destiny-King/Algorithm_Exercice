//
// Created by Destiny on 2022/10/26.
//
#include "LengthOfLIS.h"

int main() {
  system("chcp 65001");

  LengthOfLIS lengthOfLis;

  vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
  int ret = lengthOfLis.lengthOfLIS(nums);
  cout << ret << endl;

  return 0;
}