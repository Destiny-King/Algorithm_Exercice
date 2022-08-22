//
// Created by Destiny on 2022/7/5.
//
#include "ArrayIntersection.h"

int main() {
  system("chcp 65001");

  ArrayIntersection arrayIntersection;

  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};
  vector<int> num = arrayIntersection.intersection(nums1, nums2);

  arrayIntersection.traverseArray(num);

  return 0;
}