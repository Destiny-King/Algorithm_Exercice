//
// Created by Destiny on 2022/11/29.
//

#include "MaxProfit.h"

int MaxProfit::maxProfit(vector<int> &prices, int fee) {
  int result = 0;
  int minPrice = prices[0];
  for (int i = 1; i < prices.size(); ++i) {
    if (prices[i] < minPrice)
      minPrice = prices[i];
    if (prices[i] >= minPrice && prices[i] <= minPrice + fee) {
      continue;
    }
    if (prices[i] > minPrice + fee) {
      result += prices[i] - minPrice - fee;
      minPrice = prices[i] - fee;
    }
  }
  return result;
}
