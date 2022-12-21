//
// Created by Destiny on 2022/10/26.
//
#include "MaxProfit.h"

int main() {
  system("chcp 65001");

  MaxProfit maxProfit;

  vector<int> cost = {3, 3, 5, 0, 0, 3, 1, 4};
  int ret = maxProfit.maxProfit(cost);
  cout << ret << endl;

  int ret2 = maxProfit.maxProfit2(cost);
  cout << ret2 << endl;

  int ret3 = maxProfit.maxProfit3(cost);
  cout << ret3 << endl;

  return 0;
}