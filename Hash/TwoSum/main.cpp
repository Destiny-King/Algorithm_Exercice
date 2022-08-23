//
// Created by Destiny on 2022/7/5.
//
#include "TwoSum.h"

int main() {
  system("chcp 65001");

  TwoSum twoSum;

  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ret = twoSum.twoSum(nums, target);

  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}