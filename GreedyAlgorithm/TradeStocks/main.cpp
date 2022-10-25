//
// Created by Destiny on 2022/10/20.
//
#include "TradeStocks.h"

int main() {
  system("chcp 65001");

  TradeStocks tradeStocks;

  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int ret = tradeStocks.maxProfit(prices);
  cout << ret << endl;

  return 0;
}