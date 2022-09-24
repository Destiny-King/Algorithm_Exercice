//
// Created by Destiny on 2022/9/24.
//

#include "NextBiggerElement.h"
#include <unordered_map>

vector<int> NextBiggerElement::nextGreaterElement(vector<int> &nums1,
                                                  vector<int> &nums2) {
  stack<int> st;
  // result数组初始化
  vector<int> result(nums1.size(), -1);
  if (nums1.size() == 0)
    return result;

  // map映射
  unordered_map<int, int> umap; // key：下标元素，value：下标
  for (int i = 0; i < nums1.size(); ++i) {
    umap[nums1[i]] = i;
  }

  //单调递减栈
  st.push(0);
  for (int i = 1; i < nums2.size(); ++i) {
    while (!st.empty() && nums2[i] > nums2[st.top()]) {
      if (umap.count(nums2[st.top()]) > 0) {
        int index = umap[nums2[st.top()]];
        result[index] = nums2[i];
      }
      st.pop();
    }
    st.push(i);
  }

  return result;
}
