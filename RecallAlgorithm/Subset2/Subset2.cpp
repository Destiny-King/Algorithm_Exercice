//
// Created by Destiny on 2022/11/12.
//

#include "Subset2.h"
#include <algorithm>

vector<vector<int>> Subset2::subsetsWithDup(vector<int> &nums) {
  result.clear();
  path.clear();
  sort(nums.begin(), nums.end());
  backtracking(nums, 0);
  return result;
}

void Subset2::backtracking(vector<int> &nums, int startIndex) {
  result.push_back(path);
  for (int i = startIndex; i < nums.size(); ++i) {
    if (i > startIndex && nums[i] == nums[i - 1]) {
      continue;
    }
    path.push_back(nums[i]);
    backtracking(nums, i + 1);
    path.pop_back();
  }
}
