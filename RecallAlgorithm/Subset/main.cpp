//
// Created by Destiny on 2022/10/21.
//
#include "Subset.h"

int main() {
  system("chcp 65001");

  Subset subset;

  vector<int> nums = {1, 2, 3};
  vector<vector<int>> ret = subset.subsets(nums);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  vector<int> nums2 = {1, 2, 2};
  vector<vector<int>> ret2 = subset.subsetsWithDup(nums2);
  for (int i = 0; i < ret2.size(); ++i) {
    cout << "[";
    for (int j = 0; j < ret2[i].size(); ++j) {
      cout << ret2[i][j] << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}