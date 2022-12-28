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

int MaxProfit::maxProfit3(vector<int> &prices) {
  if (prices.size() == 0)
    return 0;
  vector<vector<int>> dp(prices.size(), vector<int>(5, 0));
  dp[0][1] = -prices[0];
  dp[0][3] = -prices[0];
  for (int i = 1; i < prices.size(); ++i) {
    dp[i][0] = dp[i - 1][0];
    dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
    dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + prices[i]);
    dp[i][3] = max(dp[i - 1][3], dp[i - 1][2] - prices[i]);
    dp[i][4] = max(dp[i - 1][4], dp[i - 1][3] + prices[i]);
  }
  return dp[prices.size() - 1][4];
}

int MaxProfit::maxProfit4(int k, vector<int> &prices) {
  if (prices.size() == 0)
    return 0;
  vector<vector<int>> dp(prices.size(), vector<int>(2 * k + 1, 0));
  for (int j = 1; j < 2 * k; j += 2) {
    dp[0][j] = -prices[0];
  }
  for (int i = 1; i < prices.size(); ++i) {
    for (int j = 0; j < 2 * k - 1; j += 2) {
      dp[i][j + 1] = max(dp[i - 1][j + 1], dp[i - 1][j] - prices[i]);
      dp[i][j + 2] = max(dp[i - 1][j + 2], dp[i - 1][j + 1] + prices[i]);
    }
  }
  return dp[prices.size() - 1][2 * k];
}

int MaxProfit::maxProfit5(vector<int> &prices) {
  int n = prices.size();
  if (n == 0)
    return 0;
  vector<vector<int>> dp(n, vector<int>(4, 0));
  dp[0][0] -= prices[0];
  for (int i = 1; i < n; ++i) {
    dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][3] - prices[i]),
                   dp[i - 1][1] - prices[i]);
    dp[i][1] = max(dp[i - 1][1], dp[i - 1][3]);
    dp[i][2] = dp[i - 1][0] + prices[i];
    dp[i][3] = dp[i - 1][2];
  }
  return max(max(dp[n - 1][3], dp[n - 1][1]), dp[n - 1][2]);
}

int MaxProfit::maxProfit6(vector<int> &prices, int fee) {
  int n = prices.size();
  vector<vector<int>> dp(n, vector<int>(2, 0));
  dp[0][0] -= prices[0];
  for (int i = 1; i < n; ++i) {
    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
    dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i] - fee);
  }
  return max(dp[n - 1][0], dp[n - 1][1]);
}
