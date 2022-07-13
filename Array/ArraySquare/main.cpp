//
// Created by Destiny on 2022/7/5.
//
#include "ArraySquare.h"

int main() {
  system("chcp 65001");

  vector<int> nums = {-7, -3, 2, 3, 11};
  ArraySquare array;

  vector<int> result = array.arraySquare_Violent(nums);
  cout << "暴力解法结果为：[";
  for (int i = 0; i < result.size(); ++i) {
    cout << result[i] << ",";
  }
  cout << "]" << endl;

  vector<int> nums2 = {-7, -3, 2, 3, 11};
  vector<int> result2 = array.arraySquare_DoublePointer(nums2);
  cout << "双指针解法结果为：[";
  for (int j = 0; j < result2.size(); ++j) {
    cout << result2[j] << ",";
  }
  cout << "]";

  return 0;
}