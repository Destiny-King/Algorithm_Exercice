//
// Created by Destiny on 2022/11/12.
//
#include "AllPermute.h"

int main() {
  system("chcp 65001");

  AllPermute allPermute;

  vector<int> nums = {1, 2, 3};
  vector<vector<int>> ret = allPermute.permute(nums);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  cout << "--------" << endl;

  vector<int> nums2 = {1, 2, 1};
  vector<vector<int>> ret2 = allPermute.permuteUnique(nums2);
  for (int i = 0; i < ret2.size(); ++i) {
    for (int j = 0; j < ret2[i].size(); ++j) {
      cout << ret2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}