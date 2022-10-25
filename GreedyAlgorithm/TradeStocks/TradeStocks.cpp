//
// Created by Destiny on 2022/10/25.
//

#include "TradeStocks.h"

int TradeStocks::maxProfit(vector<int> &prices) {
  int result = 0;
  for (int i = 1; i < prices.size(); ++i) {
    result += max(prices[i] - prices[i - 1], 0);
  }
  return result;
}
