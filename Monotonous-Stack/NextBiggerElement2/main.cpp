//
// Created by Destiny on 2022/7/5.
//
#include "NextBiggerElement2.h"

int main() {
  system("chcp 65001");

  NextBiggerElement2 nextBiggerElement2;

  vector<int> nums = {1, 2, 1};
  vector<int> ret = nextBiggerElement2.nextGreaterElement(nums);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}