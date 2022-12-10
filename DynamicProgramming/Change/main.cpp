//
// Created by Destiny on 2022/10/26.
//
#include "Change.h"

int main() {
  system("chcp 65001");

  Change change;

  int amount = 5;
  vector<int> coins = {1, 2, 5};
  int ret = change.change(amount, coins);
  cout << ret << endl;

  int amount2 = 11;
  int ret2 = change.coinChange(coins, amount2);
  cout << ret2 << endl;

  return 0;
}