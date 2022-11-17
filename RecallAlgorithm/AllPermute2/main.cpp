//
// Created by Destiny on 2022/11/12.
//
#include "AllPermute2.h"

int main() {
  system("chcp 65001");

  AllPermute2 allPermute2;

  vector<int> nums = {1, 2, 1};
  vector<vector<int>> ret = allPermute2.permuteUnique(nums);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}