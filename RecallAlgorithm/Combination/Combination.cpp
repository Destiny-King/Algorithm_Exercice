//
// Created by Destiny on 2022/10/9.
//

#include "Combination.h"

vector<vector<int>> Combination::combine(int n, int k) {
  backtracking(n, k, 1);
  return result;
}

void Combination::backtracking(int n, int k, int startIndex) {
  if (path.size() == k) {
    result.push_back(path);
    return;
  }
  for (int i = startIndex; i <= n - (k - path.size()) + 1; ++i) {
    path.push_back(i); //处理节点
    backtracking(n, k, i + 1);
    path.pop_back(); //回溯，撤销处理的节点
  }
}
