//
// Created by Destiny on 2022/7/5.
//
#include "RemoveElements.h"

int main() {
  system("chcp 65001");

  vector<int> nums = {0, 1, 2, 3, 3, 0, 4, 2};
  int val = 2;
  RemoveElements elements;

  int result = elements.removeElement_Violent(nums, val);
  cout << "暴力解法结果为：" << result << endl;

  int result2 = elements.removeElement_DoublePointer(nums, val);
  cout << "双指针解法结果为：" << result2 << endl;

  int result3 = elements.removeElement_OppositeDoublePointer(nums, val);
  cout << "相向双指针解法结果为：" << result3 << endl;

  return 0;
}