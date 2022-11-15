//
// Created by Destiny on 2022/11/15.
//
#include "GiveoutCandy.h"

int main() {
  system("chcp 65001");

  GiveoutCandy giveoutCandy;

  vector<int> nums = {1, 0, 2};
  int ret = giveoutCandy.candy(nums);
  cout << ret << endl;

  return 0;
}