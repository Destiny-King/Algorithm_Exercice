//
// Created by Destiny on 2022/9/28.
//

#include "MaxRectangle.h"

//双指针法
int MaxRectangle::largestRectangleArea_DoublePointer(vector<int> &heights) {
  int sum = 0;
  for (int i = 0; i < heights.size(); ++i) {
    int left = i;
    int right = i;
    for (; left >= 0; left--) {
      if (heights[left] < heights[i])
        break;
    }
    for (; right < heights.size(); right++) {
      if (heights[right] < heights[i])
        break;
    }
    int w = right - left - 1;
    int h = heights[i];
    sum = max(sum, w * h);
  }

  return sum;
}

//动态规划
int MaxRectangle::largestRectangleArea_DynamicProgramming(
    vector<int> &heights) {
  vector<int> minLeftIndex(heights.size());
  vector<int> minRightIndex(heights.size());
  int size = heights.size();

  // 记录每个柱子 左边第一个小于该柱子的下标
  minLeftIndex[0] = -1;
  for (int i = 1; i < size; ++i) {
    int t = i - 1;
    while (t >= 0 && heights[t] >= heights[i])
      t = minLeftIndex[t];
    minLeftIndex[i] = t;
  }

  // 记录每个柱子 右边第一个小于该柱子的下标
  minRightIndex[size - 1] = size;
  for (int i = size - 2; i >= 0; i--) {
    int t = i + 1;
    while (t < size && heights[t] >= heights[i])
      t = minRightIndex[t];
    minRightIndex[i] = t;
  }

  //求和
  int result = 0;
  for (int i = 0; i < size; ++i) {
    int sum = heights[i] * (minRightIndex[i] - minLeftIndex[i] - 1);
    result = max(sum, result);
  }

  return result;
}

//单调栈
int MaxRectangle::largestRectangleArea_MonotonousStack(vector<int> &heights) {
  stack<int> st;
  heights.insert(heights.begin(), 0); //数组头部加入元素0
  heights.push_back(0);               //数组尾部加入元素0
  st.push(0);
  int result = 0;
  for (int i = 1; i < heights.size(); ++i) {
    while (heights[i] < heights[st.top()]) {
      int mid = st.top();
      st.pop();
      int w = i - st.top() - 1;
      int h = heights[mid];
      result = max(result, w * h);
    }
    st.push(i);
  }

  return result;
}
