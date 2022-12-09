//
// Created by Destiny on 2022/11/17.
//

#include "AllPermute.h"
#include <algorithm>

void AllPermute::backtracking(vector<int> &nums, vector<bool> &used) {
  if (path.size() == nums.size()) {
    result.push_back(path);
    return;
  }
  for (int i = 0; i < nums.size(); ++i) {
    if (used[i] == true)
      continue;
    used[i] = true;
    path.push_back(nums[i]);
    backtracking(nums, used);
    path.pop_back();
    used[i] = false;
  }
}

vector<vector<int>> AllPermute::permute(vector<int> &nums) {
  result.clear();
  path.clear();
  vector<bool> used(nums.size(), false);
  backtracking(nums, used);
  return result;
}

void AllPermute::backtracking2(vector<int> &nums, vector<bool> &used) {
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
      backtracking2(nums, used);
      path.pop_back();
      used[i] = false;
    }
  }
}

vector<vector<int>> AllPermute::permuteUnique(vector<int> &nums) {
  result.clear();
  path.clear();
  sort(nums.begin(), nums.end());
  vector<bool> used(nums.size(), false);
  backtracking2(nums, used);
  return result;
}
