//
// Created by Destiny on 2022/10/21.
//

#include "Subset.h"
#include <algorithm>

void Subset::backtracking(vector<int> &nums, int startIndex) {
  result.push_back(path);
  if (startIndex >= nums.size()) {
    return;
  }
  for (int i = startIndex; i < nums.size(); ++i) {
    path.push_back(nums[i]);
    backtracking(nums, i + 1);
    path.pop_back();
  }
}

vector<vector<int>> Subset::subsets(vector<int> &nums) {
  result.clear();
  path.clear();
  backtracking(nums, 0);
  return result;
}

void Subset::backtracking2(vector<int> &nums, int startIndex) {
  result.push_back(path);
  for (int i = startIndex; i < nums.size(); ++i) {
    if (i > startIndex && nums[i] == nums[i - 1]) {
      continue;
    }
    path.push_back(nums[i]);
    backtracking2(nums, i + 1);
    path.pop_back();
  }
}

vector<vector<int>> Subset::subsetsWithDup(vector<int> &nums) {
  result.clear();
  path.clear();
  sort(nums.begin(), nums.end());
  backtracking2(nums, 0);
  return result;
}
