//
// Created by Destiny on 2022/11/3.
//
#include "GasStation.h"

int main() {
  system("chcp 65001");

  GasStation gasStation;

  vector<int> gas = {1, 2, 3, 4, 5};
  vector<int> cost = {3, 4, 5, 1, 2};
  int ret = gasStation.canCompleteCircuit(gas, cost);
  cout << ret << endl;

  return 0;
}