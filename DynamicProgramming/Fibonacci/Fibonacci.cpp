//
// Created by Destiny on 2022/10/26.
//

#include "Fibonacci.h"

int Fibonacci::Fib(int N) {
  if (N <= 1)
    return N;
  vector<int> dp(N + 1);
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= N; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[N];
}