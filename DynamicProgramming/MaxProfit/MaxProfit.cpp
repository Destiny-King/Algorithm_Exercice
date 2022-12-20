//
// Created by Destiny on 2022/12/19.
//

#include "MaxProfit.h"

int MaxProfit::maxProfit(vector<int> &prices) {
  int len = prices.size();
  if (len == 0)
    return 0;
  vector<vector<int>> dp(len, vector<int>(2));
  dp[0][0] -= prices[0];
  dp[0][1] = 0;
  for (int i = 1; i < len; ++i) {
    dp[i][0] = max(dp[i - 1][0], -prices[i]);
    dp[i][1] = max(dp[i - 1][1], prices[i] + dp[i - 1][0]);
  }
  return dp[len - 1][1];
}

int MaxProfit::maxProfit2(vector<int> &prices) {
  int len = prices.size();
  vector<vector<int>> dp(len, vector<int>(2));
  dp[0][0] -= prices[0];
  dp[0][1] = 0;
  for (int i = 1; i < len; ++i) {
    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
    dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
  }
  return dp[len - 1][1];
}
