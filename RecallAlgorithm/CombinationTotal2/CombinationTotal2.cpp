//
// Created by Destiny on 2022/10/19.
//

#include "CombinationTotal2.h"
#include <algorithm>

void CombinationTotal2::backtracking(vector<int> &candidates, int target,
                                     int sum, int startIndex) {
  if (sum == target) {
    result.push_back(path);
    return;
  }

  for (int i = startIndex;
       i < candidates.size() && sum + candidates[i] <= target; ++i) {
    sum += candidates[i];
    path.push_back(candidates[i]);
    backtracking(candidates, target, sum, i);
    sum -= candidates[i];
    path.pop_back();
  }
}

vector<vector<int>> CombinationTotal2::combinationSum(vector<int> &candidates,
                                                      int target) {
  result.clear();
  path.clear();
  sort(candidates.begin(), candidates.end());
  backtracking(candidates, target, 0, 0);
  return result;
}
