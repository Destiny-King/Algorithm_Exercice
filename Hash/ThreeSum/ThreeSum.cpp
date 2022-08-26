//
// Created by Destiny on 2022/8/26.
//

#include "ThreeSum.h"
#include <algorithm>

//双指针法
vector<vector<int>> ThreeSum::threeSum(vector<int> &nums) {
  vector<vector<int>> result;
  sort(nums.begin(), nums.end()); //数组排序

  for (int i = 0; i < nums.size(); ++i) {
    //排序后如果第一个元素大于零，直接返回
    if (nums[i] > 0) {
      return result;
    }
    //去重a方法
    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }
    int left = i + 1;
    int right = nums.size() - 1;
    while (right > left) {
      if (nums[i] + nums[left] + nums[right] > 0)
        right--;
      else if (nums[i] + nums[left] + nums[right] < 0)
        left++;
      else {
        result.push_back(vector<int>{nums[i], nums[left], nums[right]});
        //去重放在找到一个三元组之后，对b和c去重
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
  return result;
}
