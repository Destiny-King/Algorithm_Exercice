//
// Created by Destiny on 2022/11/12.
//
#include "IncreasingSubsequence.h"

int main() {
  system("chcp 65001");

  IncreasingSubsequence increasingSubsequence;

  vector<int> nums = {4, 6, 7, 7};
  vector<vector<int>> ret = increasingSubsequence.findSubsequences(nums);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}