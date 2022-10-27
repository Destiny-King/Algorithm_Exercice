//
// Created by Destiny on 2022/10/26.
//
#include "MinCostClimbingStairs.h"

int main() {
  system("chcp 65001");

  MinCostClimbingStairs minCostClimbingStairs;

  vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  int ret = minCostClimbingStairs.minCostClimbingStairs(cost);
  cout << ret << endl;

  return 0;
}