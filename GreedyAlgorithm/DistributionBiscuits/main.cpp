//
// Created by Destiny on 2022/10/20.
//
#include "DistributionBiscuits.h"

int main() {
  system("chcp 65001");

  DistributionBiscuits distributionBiscuits;

  vector<int> g = {1, 2, 3};
  vector<int> s = {1, 1};
  int ret = distributionBiscuits.findContentChildren(g, s);
  cout << ret << endl;

  return 0;
}