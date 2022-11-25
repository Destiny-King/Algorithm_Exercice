//
// Created by Destiny on 2022/11/25.
//

#include "EraseOverlapIntervals.h"
#include <algorithm>

bool EraseOverlapIntervals::cmp(const vector<int> &a, const vector<int> &b) {
  return a[1] < b[1];
}

int EraseOverlapIntervals::eraseOverlapIntervals(
    vector<vector<int>> &intervals) {
  if (intervals.size() == 0)
    return 0;
  sort(intervals.begin(), intervals.end(), cmp);
  int count = 1;
  int end = intervals[0][1];
  for (int i = 1; i < intervals.size(); ++i) {
    if (end <= intervals[i][0]) {
      end = intervals[i][1];
      count++;
    }
  }
  return intervals.size() - count;
}
