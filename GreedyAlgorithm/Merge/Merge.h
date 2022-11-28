//
// Created by Destiny on 2022/11/28.
//

#ifndef GREEDYALGORITHM_MERGE_H
#define GREEDYALGORITHM_MERGE_H

#include <iostream>
#include <vector>
using namespace std;

class Merge {
public:
  static bool cmp(const vector<int> &a, const vector<int> &b);
  vector<vector<int>> merge(vector<vector<int>> &intervals);
};

#endif // GREEDYALGORITHM_MERGE_H
