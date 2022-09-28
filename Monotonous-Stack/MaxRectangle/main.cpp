//
// Created by Destiny on 2022/7/5.
//
#include "MaxRectangle.h"

int main() {
  system("chcp 65001");

  MaxRectangle maxRectangle;

  vector<int> nums = {2, 1, 5, 6, 2, 3};
  int ret = maxRectangle.largestRectangleArea_DoublePointer(nums);
  cout << "双指针法: " << ret << endl;

  int ret2 = maxRectangle.largestRectangleArea_DynamicProgramming(nums);
  cout << "动态规划法: " << ret2 << endl;

  return 0;
}