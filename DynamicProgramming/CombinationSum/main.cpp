//
// Created by Destiny on 2022/10/26.
//
#include "CombinationSum.h"

int main() {
  system("chcp 65001");

  CombinationSum combinationSum;

  vector<int> dp = {1, 2, 3};
  int target = 4;
  int ret = combinationSum.combinationSum4(dp, target);
  cout << ret << endl;

  return 0;
}