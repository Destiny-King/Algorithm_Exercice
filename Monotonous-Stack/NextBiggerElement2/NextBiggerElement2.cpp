//
// Created by Destiny on 2022/9/26.
//

#include "NextBiggerElement2.h"

vector<int> NextBiggerElement2::nextGreaterElement(vector<int> &nums) {
  vector<int> result(nums.size(), -1);
  if (nums.size() == 0)
    return result;
  //开始单调栈
  stack<int> st;
  for (int i = 0; i < nums.size() * 2; ++i) {
    while (!st.empty() && nums[i % nums.size()] > nums[st.top()]) {
      result[st.top()] = nums[i % nums.size()];
      st.pop();
    }
    st.push(i % nums.size());
  }
  return result;
}
