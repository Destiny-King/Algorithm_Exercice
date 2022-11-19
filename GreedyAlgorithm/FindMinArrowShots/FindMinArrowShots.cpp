//
// Created by Destiny on 2022/11/19.
//

#include "FindMinArrowShots.h"
#include <algorithm>

bool FindMinArrowShots::cmp(vector<int> &a, vector<int> &b) {
  return a[0] < b[0];
}

int FindMinArrowShots::findMinArrowShots(vector<vector<int>> &points) {
  if (points.size() == 0)
    return 0;
  sort(points.begin(), points.end(), cmp);
  int result = 1;
  for (int i = 1; i < points.size(); ++i) {
    if (points[i][0] > points[i - 1][1]) {
      result++;
    } else {
      points[i][1] = min(points[i - 1][1], points[i][1]);
    }
  }
  return result;
}
