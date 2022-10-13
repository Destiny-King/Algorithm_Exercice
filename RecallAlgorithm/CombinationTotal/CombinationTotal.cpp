//
// Created by Destiny on 2022/10/13.
//

#include "CombinationTotal.h"

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
  for (int i = startIndex; i <= 9; ++i) {
    sum += i;
    path.push_back(i);
    backtracking(targetNum, k, sum, i + 1);
    sum -= i;        //回溯
    path.pop_back(); //回溯
  }
}

vector<vector<int>> CombinationTotal::combinationSum3(int k, int n) {
  backtracking(n, k, 0, 1);
  return result;
}
