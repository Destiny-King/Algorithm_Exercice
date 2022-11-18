//
// Created by Destiny on 2022/11/18.
//

#ifndef GREEDYALGORITHM_REBUILDQUEUE_H
#define GREEDYALGORITHM_REBUILDQUEUE_H

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class RebuildQueue {
public:
  static bool cmp(const vector<int> &a, const vector<int> &b);
  vector<vector<int>> reconstructQueue(vector<vector<int>> &people);
};

#endif // GREEDYALGORITHM_REBUILDQUEUE_H
