//
// Created by Destiny on 2022/10/31.
//
#include "DivideIsosumSubsets.h"

int main() {
  system("chcp 65001");

  DivideIsosumSubsets divideIsosumSubsets;

  vector<int> nums = {1, 5, 11, 5};
  bool ret = divideIsosumSubsets.canPartition(nums);
  if (ret == 0) {
    cout << "false" << endl;
  } else if (ret == 1) {
    cout << "true" << endl;
  }

  return 0;
}