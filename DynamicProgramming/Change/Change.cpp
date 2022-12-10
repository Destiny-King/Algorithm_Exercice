//
// Created by Destiny on 2022/12/7.
//

#include "Change.h"

int Change::change(int amount, vector<int> &coins) {
  vector<int> dp(amount + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < coins.size(); ++i) {
    for (int j = coins[i]; j <= amount; ++j) {
      dp[j] += dp[j - coins[i]];
    }
  }
  return dp[amount];
}

int Change::coinChange(vector<int> &coins, int amount) {
  vector<int> dp(amount + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 0; i < coins.size(); ++i) {
    for (int j = coins[i]; j <= amount; ++j) {
      if (dp[j - coins[i]] != INT_MAX) {
        dp[j] = min(dp[j - coins[i]] + 1, dp[j]);
      }
    }
  }
  if (dp[amount] == INT_MAX)
    return -1;
  return dp[amount];
}
