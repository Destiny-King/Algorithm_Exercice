//
// Created by Destiny on 2022/10/25.
//

#include "MaxSubSum.h"

int MaxSubSum::maxSubArray(vector<int> &nums) {
  int result = INT32_MIN;
  int count = 0;
  for (int i = 0; i < nums.size(); ++i) {
    count += nums[i];
    if (count > result) {
      result = count;
    }
    if (count <= 0)
      count = 0;
  }
  return result;
}
