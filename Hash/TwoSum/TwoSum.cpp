//
// Created by Destiny on 2022/8/23.
//

#include "TwoSum.h"
#include <unordered_map>

vector<int> TwoSum::twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); ++i) {
    //遍历当前元素，在map中寻找是否有匹配的key
    auto iter = map.find(target - nums[i]);
    if (iter != map.end()) {
      return {iter->second, i};
    }
    map.insert(pair<int, int>(nums[i], i));
  }
  return {};
}
