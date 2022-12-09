//
// Created by Destiny on 2022/10/13.
//

#include "CombinationTotal.h"
#include <algorithm>

void CombinationTotal::backtracking(int targetNum, int k, int sum,
                                    int startIndex) {
  if (sum > targetNum) { //剪枝
    return;
  }
  if (path.size() == k) {
    if (sum == targetNum)
      result.push_back(path);
    return;
  }
  for (int i = startIndex; i <= 9 - (k - path.size()) + 1; ++i) {
    sum += i;
    path.push_back(i);
    backtracking(targetNum, k, sum, i + 1);
    sum -= i;        //回溯
    path.pop_back(); //回溯
  }
}

vector<vector<int>> CombinationTotal::combinationSum(int k, int n) {
  backtracking(n, k, 0, 1);
  return result;
}

void CombinationTotal::backtracking2(vector<int> &candidates, int target,
                                     int sum, int startIndex) {
  if (sum == target) {
    result.push_back(path);
    return;
  }

  for (int i = startIndex;
       i < candidates.size() && sum + candidates[i] <= target; ++i) {
    sum += candidates[i];
    path.push_back(candidates[i]);
    backtracking2(candidates, target, sum, i);
    sum -= candidates[i];
    path.pop_back();
  }
}

vector<vector<int>> CombinationTotal::combinationSum2(vector<int> &candidates,
                                                      int target) {
  result.clear();
  path.clear();
  sort(candidates.begin(), candidates.end());
  backtracking2(candidates, target, 0, 0);
  return result;
}

void CombinationTotal::backtracking3(vector<int> &candidates, int target,
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
    backtracking3(candidates, target, sum, i + 1, used);
    used[i] = false;
    sum -= candidates[i];
    path.pop_back();
  }
}

vector<vector<int>> CombinationTotal::combinationSum3(vector<int> &candidates,
                                                      int target) {
  vector<bool> used(candidates.size(), false);
  path.clear();
  result.clear();
  sort(candidates.begin(), candidates.end());
  backtracking3(candidates, target, 0, 0, used);
  return result;
}
