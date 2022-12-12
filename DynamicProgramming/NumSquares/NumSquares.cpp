//
// Created by Destiny on 2022/12/12.
//

#include "NumSquares.h"

int NumSquares::numSquares(int n) {
  vector<int> dp(n + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i * i <= n; ++i) {
    for (int j = i * i; j <= n; ++j) {
      dp[j] = min(dp[j - i * i] + 1, dp[j]);
    }
  }
  return dp[n];
}
