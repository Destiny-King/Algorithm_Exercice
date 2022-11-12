//
// Created by Destiny on 2022/11/12.
//
#include "Subset2.h"

int main() {
  system("chcp 65001");

  Subset2 subset2;

  vector<int> nums = {1, 2, 2};
  vector<vector<int>> ret = subset2.subsetsWithDup(nums);
  for (int i = 0; i < ret.size(); ++i) {
    cout << "[";
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}