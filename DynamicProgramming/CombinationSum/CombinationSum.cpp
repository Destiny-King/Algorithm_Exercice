//
// Created by Destiny on 2022/12/8.
//

#include "CombinationSum.h"

int CombinationSum::combinationSum4(vector<int> &nums, int target) {
  vector<int> dp(target + 1, 0);
  dp[0] = 1;
  for (int i = 0; i <= target; ++i) {
    for (int j = 0; j < nums.size(); ++j) {
      if (i - nums[j] >= 0 && dp[i] < INT_MAX - dp[i - nums[j]]) {
        dp[i] += dp[i - nums[j]];
      }
    }
  }
  return dp[target];
}
