//
// Created by Destiny on 2022/11/19.
//
#include "EraseOverlapIntervals.h"

int main() {
  system("chcp 65001");

  EraseOverlapIntervals eraseOverlapIntervals;

  vector<vector<int>> nums = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  int ret = eraseOverlapIntervals.eraseOverlapIntervals(nums);
  cout << ret << endl;

  return 0;
}