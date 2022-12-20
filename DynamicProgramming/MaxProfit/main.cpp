//
// Created by Destiny on 2022/10/26.
//
#include "MaxProfit.h"

int main() {
  system("chcp 65001");

  MaxProfit maxProfit;

  vector<int> cost = {7, 1, 5, 3, 6, 4};
  int ret = maxProfit.maxProfit(cost);
  cout << ret << endl;

  int ret2 = maxProfit.maxProfit2(cost);
  cout << ret2 << endl;

  return 0;
}