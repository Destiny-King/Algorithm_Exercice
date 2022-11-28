//
// Created by Destiny on 2022/11/3.
//
#include "Merge.h"

int main() {
  system("chcp 65001");

  Merge merge;

  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  vector<vector<int>> ret = merge.merge(intervals);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
  }

  return 0;
}