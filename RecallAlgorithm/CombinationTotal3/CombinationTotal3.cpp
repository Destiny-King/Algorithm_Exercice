//
// Created by Destiny on 2022/10/19.
//

#include "CombinationTotal3.h"
#include <algorithm>

void CombinationTotal3::backtracking(vector<int> &candidates, int target,
                                     int sum, int startIndex,
                                     vector<bool> &used) {
  if (sum == target) {
    result.push_back(path);
    return;
  }
  for (int i = startIndex;
       i < candidates.size() && sum + candidates[i] <= target; ++i) {
    if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == false) {
      continue;
    }
    sum += candidates[i];
    path.push_back(candidates[i]);
    used[i] = true;
    backtracking(candidates, target, sum, i + 1, used);
    used[i] = false;
    sum -= candidates[i];
    path.pop_back();
  }
}

vector<vector<int>> CombinationTotal3::combinationSum2(vector<int> &candidates,
                                                       int target) {
  vector<bool> used(candidates.size(), false);
  path.clear();
  result.clear();
  sort(candidates.begin(), candidates.end());
  backtracking(candidates, target, 0, 0, used);
  return result;
}
