//
// Created by Destiny on 2022/11/17.
//

#include "AllPermute2.h"
#include <algorithm>

vector<vector<int>> AllPermute2::permuteUnique(vector<int> &nums) {
  result.clear();
  path.clear();
  sort(nums.begin(), nums.end());
  vector<bool> used(nums.size(), false);
  backtracking(nums, used);
  return result;
}
void AllPermute2::backtracking(vector<int> &nums, vector<bool> &used) {
  if (path.size() == nums.size()) {
    result.push_back(path);
    return;
  }
  for (int i = 0; i < nums.size(); ++i) {
    if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false) {
      continue;
    }
    if (used[i] == false) {
      used[i] = true;
      path.push_back(nums[i]);
      backtracking(nums, used);
      path.pop_back();
      used[i] = false;
    }
  }
}
