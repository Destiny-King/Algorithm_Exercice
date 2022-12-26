//
// Created by Destiny on 2022/10/26.
//
#include "MaxProfit.h"

int main() {
  system("chcp 65001");

  MaxProfit maxProfit;

  vector<int> cost = {1, 2, 3, 0, 2};
  int ret = maxProfit.maxProfit(cost);
  cout << ret << endl;

  int ret2 = maxProfit.maxProfit2(cost);
  cout << ret2 << endl;

  int ret3 = maxProfit.maxProfit3(cost);
  cout << ret3 << endl;

  int k = 2;
  int ret4 = maxProfit.maxProfit4(k, cost);
  cout << ret4 << endl;

  int ret5 = maxProfit.maxProfit5(cost);
  cout << ret5 << endl;

  return 0;
}