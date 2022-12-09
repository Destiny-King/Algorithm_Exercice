//
// Created by Destiny on 2022/10/9.
//
#include "CombinationTotal.h"

int main() {
  system("chcp 65001");

  CombinationTotal combinationTotal;

  int n = 4;
  int k = 2;
  vector<vector<int>> ret = combinationTotal.combinationSum(k, n);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  cout << "--------" << endl;

  vector<int> candidates = {2, 3, 6, 7};
  int target = 7;
  vector<vector<int>> ret2 =
      combinationTotal.combinationSum2(candidates, target);
  for (int i = 0; i < ret2.size(); ++i) {
    for (int j = 0; j < ret2[i].size(); ++j) {
      cout << ret2[i][j] << " ";
    }
    cout << endl;
  }

  cout << "--------" << endl;

  vector<int> candidates2 = {10, 1, 2, 7, 6, 1, 5};
  int target2 = 8;
  vector<vector<int>> ret3 =
      combinationTotal.combinationSum3(candidates2, target2);
  for (int i = 0; i < ret3.size(); ++i) {
    for (int j = 0; j < ret3[i].size(); ++j) {
      cout << ret3[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}