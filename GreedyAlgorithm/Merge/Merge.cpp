//
// Created by Destiny on 2022/11/28.
//

#include "Merge.h"
#include <algorithm>

vector<vector<int>> Merge::merge(vector<vector<int>> &intervals) {
  vector<vector<int>> result;
  if (intervals.size() == 0)
    return result;
  sort(intervals.begin(), intervals.end(), cmp);
  bool flag = false;
  int length = intervals.size();

  for (int i = 1; i < length; ++i) {
    int start = intervals[i - 1][0];
    int end = intervals[i - 1][1];
    while (intervals[i][0] < end) {
      end = max(end, intervals[i][1]);
      if (i == length - 1)
        flag = true;
      i++;
    }
    result.push_back({start, end});
  }
  if (flag == false) {
    result.push_back({intervals[length - 1][0], intervals[length - 1][1]});
  }
  return result;
}

bool Merge::cmp(const vector<int> &a, const vector<int> &b) {
  return a[0] < b[0];
}
