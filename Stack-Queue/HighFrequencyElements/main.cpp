//
// Created by Destiny on 2022/7/5.
//
#include "HighFrequencyElements.h"

int main() {
  system("chcp 65001");

  HighFrequencyElements highFrequencyElements;
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  int k = 2;
  vector<int> ret = highFrequencyElements.topKFrequent(nums, k);
  for (int i = 0; i < ret.size(); i++) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}