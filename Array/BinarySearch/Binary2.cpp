//
// Created by Destiny on 2022/7/4.
//

#include "Binary2.h"
int Binary2::search(vector<int> &nums, int target) {
  int left = 0;
  int right = nums.size(); //定义target在左闭右开的区间里，即：[left,right]
  //因为left==right的时候，在(left,right)是无效的空间，所以使用<
  while (left < right) {
    int middle = left + ((right - left) >> 1);
    if (nums[middle] > target) {
      right = middle; // target在左区间，在[middle + 1,right]中
    } else if (nums[middle] < target) {
      left = middle + 1; // target在右区间，在[middle + 1,right]中
    } else {             // nums[middle]==target
      return middle;     //数组中找到目标值，直接返回下标
    }
  }
  //未找到目标值
  return -1;
}
