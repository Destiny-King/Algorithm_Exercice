//
// Created by Destiny on 2022/9/22.
//

#include "HighFrequencyElements.h"
#include <queue>
#include <unordered_map>

//小顶堆
bool mycomparison::operator()(const pair<int, int> &lhs,
                              const pair<int, int> &rhs) {
  return lhs.second > rhs.second;
}

vector<int> HighFrequencyElements::topKFrequent(vector<int> &nums, int k) {
  //要统计元素出现频率
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); ++i) {
    map[nums[i]]++;
  }

  //对频率排序
  //定义一个小顶堆，大小为k
  priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> pri_que;

  //用固定大小为k的小顶堆，扫描所有频率的数值
  for (unordered_map<int, int>::iterator it = map.begin(); it != map.end();
       it++) {
    pri_que.push(*it);
    if (pri_que.size() > k) { // 如果堆的大小大于了K，则队列弹出
      pri_que.pop();
    }
  }

  //找出k个高频元素，因为小顶堆先弹出的是最小的
  vector<int> result(k);
  for (int i = k - 1; i >= 0; --i) {
    result[i] = pri_que.top().first;
    pri_que.pop();
  }

  return result;
}
