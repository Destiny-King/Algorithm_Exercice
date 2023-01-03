//
// Created by Destiny on 2022/12/30.
//

#include "LengthOfLIS.h"

int LengthOfLIS::lengthOfLIS(vector<int> &nums) {
  if (nums.size() <= 1)
    return nums.size();
  vector<int> dp(nums.size(), 1);
  int result = 0;
  for (int i = 1; i < nums.size(); ++i) {
    for (int j = 0; j < i; ++j) {
      if (nums[i] > nums[j])
        dp[i] = max(dp[i], dp[j] + 1);
      if (dp[i] > result)
        result = dp[i];
    }
  }
  return result;
}

int LengthOfLIS::findLengthOfLCIS(vector<int> &nums) {
  if (nums.size() == 0)
    return 0;
  vector<int> dp(nums.size(), 1);
  int result = 1;
  for (int i = 1; i < nums.size(); ++i) {
    if (nums[i] > nums[i - 1]) {
      dp[i] = dp[i - 1] + 1;
    }
    if (dp[i] > result)
      result = dp[i];
  }
  return result;
}
