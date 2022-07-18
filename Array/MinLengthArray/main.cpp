//
// Created by Destiny on 2022/7/5.
//
#include "MinLengthArray.h"

int main() {
  system("chcp 65001");

  vector<int> nums = {2, 3, 1, 2, 4, 3};
  int val = 7;
  MinLengthArray minLength;

  int result = minLength.minSubArrayLen(val, nums);
  cout << "暴力解法结果为：" << result << endl;

  int result2 = minLength.minSubArrayLen_SlideWindow(val, nums);
  cout << "滑动窗口解法结果为：" << result2 << endl;

  return 0;
}