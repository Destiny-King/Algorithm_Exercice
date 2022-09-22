//
// Created by Destiny on 2022/7/5.
//
#include "SlideWindowMax.h"

int main() {
  system("chcp 65001");

  SlideWindowMax slideWindowMax;
  vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
  int k = 3;
  vector<int> ret = slideWindowMax.maxSlidingWindow(nums, k);
  for (int i = 0; i < ret.size(); i++) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}