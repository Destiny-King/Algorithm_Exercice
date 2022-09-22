//
// Created by Destiny on 2022/9/22.
//

#include "SlideWindowMax.h"

// 每次弹出的时候，比较当前要弹出的数值是否等于队列出口元素的数值，如果相等则弹出。
// 同时pop之前判断队列当前是否为空。
void MyQueue::pop(int value) {
  if (!que.empty() && value == que.front()) {
    que.pop_front();
  }
}

// 如果push的数值大于入口元素的数值，那么就将队列后端的数值弹出，直到push的数值小于等于队列入口元素的数值为止。
// 这样就保持了队列里的数值是单调从大到小的了。
void MyQueue::push(int value) {
  while (!que.empty() && value > que.back()) {
    que.pop_back();
  }
  que.push_back(value);
}

//查询当前队列里的最大值，直接返回队列前端
int MyQueue::front() { return que.front(); }

vector<int> SlideWindowMax::maxSlidingWindow(vector<int> &nums, int k) {
  MyQueue que;
  vector<int> result;
  for (int i = 0; i < k; ++i) { //先将前k的元素放进队列
    que.push(nums[i]);
  }
  result.push_back(que.front()); // result记录前k的元素的最大值
  for (int i = k; i < nums.size(); ++i) {
    que.pop(nums[i - k]);          //滑动窗口移除最前面元素
    que.push(nums[i]);             //滑动窗口加入最后面的元素
    result.push_back(que.front()); //记录对应的最大值
  }
  return result;
}
