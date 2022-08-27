//
// Created by Destiny on 2022/8/27.
//

#include "FourSum.h"
#include <algorithm>

//双指针法
vector<vector<int>> FourSum::fourSum(vector<int> &nums, int target) {
  vector<vector<int>> result;
  sort(nums.begin(), nums.end());
  for (int k = 0; k < nums.size(); ++k) {
    //剪枝处理
    if (nums[k] > target && nums[k] >= 0 && target >= 0) {
      break;
    }
    //对nums[k]去重
    if (k > 0 && nums[k] == nums[k - 1]) {
      continue;
    }

    for (int i = k + 1; i < nums.size(); ++i) {
      // 2级剪枝处理
      if (nums[k] + nums[i] > target && nums[k] + nums[i] > 0 && target > 0) {
        break;
      }
      //对nums[i]去重
      if (i > k + 1 && nums[i] == nums[i - 1]) {
        continue;
      }

      int left = i + 1;
      int right = nums.size() - 1;
      while (right > left) {
        if (nums[k] + nums[i] + nums[left] + nums[right] > target) {
          right--;
        } else if (nums[k] + nums[i] + nums[left] + nums[right] < target) {
          left++;
        } else {
          result.push_back(
              vector<int>{nums[k], nums[i], nums[left], nums[right]});
          //对nums[left]和nums[right]去重
          while (right > left && nums[right] == nums[right - 1])
            right--;
          while (right > left && nums[left] == nums[left + 1])
            left++;

          //找到答案时，双指针同事收缩
          right--;
          left++;
        }
      }
    }
  }

  return result;
}
