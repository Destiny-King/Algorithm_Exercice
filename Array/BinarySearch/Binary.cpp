//
// Created by Destiny on 2022/7/4.
//

#include "Binary.h"

//左闭右闭
int Binary::search_LeftClosed_RightClosed(vector<int> &nums, int target) {
  int left = 0;
  int right = nums.size() - 1; // 定义target在左闭右闭的区间里，[left, right]
  while (left <= right) { // 当left==right，区间[left, right]依然有效，所以用 <=
    int middle = left + ((right - left) / 2); // 防止溢出 等同于(left + right)/2
    if (nums[middle] > target) {
      right = middle - 1; // target 在左区间，所以[left, middle - 1]
    } else if (nums[middle] < target) {
      left = middle + 1; // target 在右区间，所以[middle + 1, right]
    } else {             // nums[middle] == target
      return middle;     // 数组中找到目标值，直接返回下标
    }
  }
  // 未找到目标值
  return -1;
}

//左闭右开
int Binary::search_LeftClosed_RightOpened(vector<int> &nums, int target) {
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
