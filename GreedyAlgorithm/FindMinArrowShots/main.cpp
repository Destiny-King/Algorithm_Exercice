//
// Created by Destiny on 2022/11/19.
//
#include "FindMinArrowShots.h"

int main() {
  system("chcp 65001");

  FindMinArrowShots findMinArrowShots;

  vector<vector<int>> nums = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
  int ret = findMinArrowShots.findMinArrowShots(nums);
  cout << ret << endl;

  return 0;
}