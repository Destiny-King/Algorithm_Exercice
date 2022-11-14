//
// Created by Destiny on 2022/11/14.
//

#include "IncreasingSubsequence.h"

vector<vector<int>> IncreasingSubsequence::findSubsequences(vector<int> &nums) {
  result.clear();
  path.clear();
  backtracking(nums, 0);
  return result;
}

void IncreasingSubsequence::backtracking(vector<int> &nums, int startIndex) {
  if (path.size() > 1) {
    result.push_back(path);
  }
  int used[201] = {0};
  for (int i = startIndex; i < nums.size(); ++i) {
    if ((!path.empty() && nums[i] < path.back()) || used[nums[i] + 100] == 1) {
      continue;
    }
    used[nums[i] + 100] = 1; //使用过了
    path.push_back(nums[i]);
    backtracking(nums, i + 1);
    path.pop_back();
  }
}
