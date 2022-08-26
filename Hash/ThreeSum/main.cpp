//
// Created by Destiny on 2022/7/5.
//
#include "ThreeSum.h"

int main() {
  ThreeSum threeSum;

  vector<int> nums = {-1, 0, 1, 2, -1, -4};

  vector<vector<int>> result = threeSum.threeSum(nums);

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