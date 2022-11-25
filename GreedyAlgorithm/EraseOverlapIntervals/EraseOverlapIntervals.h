//
// Created by Destiny on 2022/11/25.
//

#ifndef GREEDYALGORITHM_ERASEOVERLAPINTERVALS_H
#define GREEDYALGORITHM_ERASEOVERLAPINTERVALS_H

#include <iostream>
#include <vector>
using namespace std;

class EraseOverlapIntervals {
public:
  static bool cmp(const vector<int> &a, const vector<int> &b);
  int eraseOverlapIntervals(vector<vector<int>> &intervals);
};

#endif // GREEDYALGORITHM_ERASEOVERLAPINTERVALS_H
