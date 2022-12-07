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
