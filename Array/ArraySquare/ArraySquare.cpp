//
// Created by Destiny on 2022/7/13.
//

#include "ArraySquare.h"
#include <algorithm>

//暴力排序：时间复杂度是 O(n + nlogn)
vector<int> ArraySquare::arraySquare_Violent(vector<int> &nums) {
  for (int i = 0; i < nums.size(); ++i) {
    nums[i] *= nums[i];
  }
  sort(nums.begin(), nums.end()); //快速排序
  return nums;
}

//双指针解法：时间复杂度为O(n)
vector<int> ArraySquare::arraySquare_DoublePointer(vector<int> &nums) {
  int k = nums.size() - 1;
  int i = 0;
  int j = nums.size() - 1;
  vector<int> result(nums.size(), 0);

  for (; i <= j;) { //最后要处理两个元素
    if (nums[i] * nums[i] < nums[j] * nums[j]) {
      result[k--] = nums[j] * nums[j];
      j--;
    } else {
      result[k--] = nums[i] * nums[i];
      i++;
    }
  }

  return result;
}
