//
// Created by Destiny on 2022/10/9.
//
#include "Combination.h"

int main() {
  system("chcp 65001");

  Combination combination;

  int n = 4;
  int k = 2;
  vector<vector<int>> ret = combination.combine(n, k);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}