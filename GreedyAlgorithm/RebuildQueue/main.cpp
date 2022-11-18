//
// Created by Destiny on 2022/11/15.
//
#include "RebuildQueue.h"

int main() {
  system("chcp 65001");

  RebuildQueue rebuildQueue;

  vector<vector<int>> nums = {{6, 0}, {5, 0}, {4, 0}, {3, 2}, {2, 2}, {1, 4}};
  vector<vector<int>> ret = rebuildQueue.reconstructQueue(nums);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}