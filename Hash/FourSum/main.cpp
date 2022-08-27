//
// Created by Destiny on 2022/7/5.
//
#include "FourSum.h"

int main() {
  system("chcp 65001");

  FourSum fourSum;
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  int target = 0;

  vector<vector<int>> result = fourSum.fourSum(nums, target);

  // vector嵌套vector遍历
  for (vector<vector<int>>::iterator it = result.begin(); it != result.end();
       it++) {
    for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
      cout << *vit << " ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}