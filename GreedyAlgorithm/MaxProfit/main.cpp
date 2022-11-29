//
// Created by Destiny on 2022/10/20.
//
#include "MaxProfit.h"

int main() {
  system("chcp 65001");

  MaxProfit maxProfit;

  vector<int> nums = {1, 3, 2, 8, 4, 9};
  int fee = 2;
  int ret = maxProfit.maxProfit(nums, fee);
  cout << ret << endl;

  return 0;
}