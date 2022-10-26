//
// Created by Destiny on 2022/10/26.
//

#include "ClimbStairs.h"

int ClimbStairs::climbStairs(int n) {
  if (n <= 1)
    return n;
  vector<int> dp(n + 1);
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i < dp.size(); ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}
