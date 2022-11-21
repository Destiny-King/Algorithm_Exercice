//
// Created by Destiny on 2022/11/21.
//

#include "FindTargetSumWays.h"

int FindTargetSumWays::findTargetSumWays(vector<int> &nums, int S) {
  int sum = 0;
  for (int i = 0; i < nums.size(); ++i) {
    sum += nums[i];
  }
  if (abs(S) > sum)
    return 0;
  if ((S + sum) % 2 == 1)
    return 0;
  int bagSize = (S + sum) / 2;
  if (bagSize < 0)
    return 0;
  vector<int> dp(bagSize + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = bagSize; j >= nums[i]; j--) {
      dp[j] += dp[j - nums[i]];
    }
  }
  return dp[bagSize];
}
