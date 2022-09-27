//
// Created by Destiny on 2022/9/27.
//

#include "PickupRain.h"

//双指针法
int PickupRain::trap_DoublePointer(vector<int> &height) {
  int sum = 0;
  for (int i = 0; i < height.size(); ++i) {
    //第一个柱子和最后一个柱子不接雨水
    if (i == 0 || i == height.size() - 1)
      continue;
    int rHeight = height[i]; //记录右边柱子的最高高度
    int lHeight = height[i]; //记录左边柱子的最高高度
    for (int r = i + 1; r < height.size(); ++r) {
      if (height[r] > rHeight)
        rHeight = height[r];
    }

    for (int l = i - 1; l >= 0; --l) {
      if (height[l] > lHeight)
        lHeight = height[l];
    }
    int h = min(lHeight, rHeight) - height[i];
    if (h > 0)
      sum += h;
  }
  return sum;
}

//动态规划法
int PickupRain::trap_DynamicProgramming(vector<int> &height) {
  if (height.size() <= 2)
    return 0;
  vector<int> maxLeft(height.size(), 0);
  vector<int> maxRight(height.size(), 0);
  int size = maxRight.size();

  //记录每个柱子左边柱子最大高度
  maxLeft[0] = height[0];
  for (int i = 1; i < size; i++) {
    maxLeft[i] = max(height[i], maxLeft[i - 1]);
  }
  //记录每个柱子右边柱子最大高度
  maxRight[size - 1] = height[size - 1];
  for (int i = size - 2; i >= 0; i--) {
    maxRight[i] = max(height[i], maxRight[i + 1]);
  }
  //求和
  int sum = 0;
  for (int i = 0; i < size; ++i) {
    int count = min(maxLeft[i], maxRight[i]) - height[i];
    if (count > 0)
      sum += count;
  }
  return sum;
}

//单调栈
int PickupRain::trap_MonotonousStack(vector<int> &height) {
  stack<int> st;
  st.push(0);
  int sum = 0;
  for (int i = 1; i < height.size(); ++i) {
    while (!st.empty() && height[i] > height[st.top()]) {
      int mid = st.top();
      st.pop();
      if (!st.empty()) {
        int h = min(height[st.top()], height[i]) - height[mid];
        int w = i - st.top() - 1;
        sum += h * w;
      }
    }
    st.push(i);
  }

  return sum;
}
