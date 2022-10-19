//
// Created by Destiny on 2022/10/19.
//
#include "CombinationTotal3.h"

int main() {
  system("chcp 65001");

  CombinationTotal3 combinationTotal3;

  vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
  int target = 8;
  vector<vector<int>> ret =
      combinationTotal3.combinationSum2(candidates, target);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}