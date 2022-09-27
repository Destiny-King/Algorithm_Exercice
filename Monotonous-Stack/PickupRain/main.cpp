//
// Created by Destiny on 2022/7/5.
//
#include "PickupRain.h"

int main() {
  system("chcp 65001");

  PickupRain pickupRain;

  vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int ret = pickupRain.trap_DoublePointer(nums);
  cout << "双指针法: " << ret << endl;

  int ret2 = pickupRain.trap_DynamicProgramming(nums);
  cout << "动态规划法: " << ret2 << endl;

  int ret3 = pickupRain.trap_MonotonousStack(nums);
  cout << "单调栈法: " << ret3 << endl;

  return 0;
}