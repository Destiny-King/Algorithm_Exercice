//
// Created by Destiny on 2022/7/5.
//
#include "NextBiggerElement.h"

int main() {
  system("chcp 65001");

  NextBiggerElement nextBiggerElement;

  vector<int> nums1 = {4, 1, 2};
  vector<int> nums2 = {1, 3, 4, 2};
  vector<int> ret = nextBiggerElement.nextGreaterElement(nums1, nums2);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  vector<int> nums = {1, 2, 1};
  vector<int> ret2 = nextBiggerElement.nextGreaterElement2(nums);
  for (int i = 0; i < ret2.size(); ++i) {
    cout << ret2[i] << " ";
  }
  cout << endl;

  return 0;
}