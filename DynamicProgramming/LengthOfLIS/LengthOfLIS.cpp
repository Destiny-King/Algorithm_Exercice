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

int LengthOfLIS::findLength(vector<int> &nums1, vector<int> &nums2) {
  vector<vector<int>> dp(nums1.size() + 1, vector<int>(nums2.size() + 1, 0));
  int result = 0;
  for (int i = 1; i <= nums1.size(); ++i) {
    for (int j = 1; j <= nums2.size(); ++j) {
      if (nums1[i - 1] == nums2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      if (dp[i][j] > result)
        result = dp[i][j];
    }
  }
  return result;
}
