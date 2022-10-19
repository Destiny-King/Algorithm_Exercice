//
// Created by Destiny on 2022/10/19.
//
#include "CombinationTotal2.h"

int main() {
  system("chcp 65001");

  CombinationTotal2 combinationTotal2;

  vector<int> candidates = {2, 3, 6, 7};
  int target = 7;
  vector<vector<int>> ret =
      combinationTotal2.combinationSum(candidates, target);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}