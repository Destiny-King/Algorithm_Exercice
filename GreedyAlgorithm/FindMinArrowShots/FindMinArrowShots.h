//
// Created by Destiny on 2022/11/19.
//

#ifndef GREEDYALGORITHM_FINDMINARROWSHOTS_H
#define GREEDYALGORITHM_FINDMINARROWSHOTS_H

#include <iostream>
#include <vector>
using namespace std;

class FindMinArrowShots {
private:
  static bool cmp(vector<int> &a, vector<int> &b);

public:
  int findMinArrowShots(vector<vector<int>> &points);
};

#endif // GREEDYALGORITHM_FINDMINARROWSHOTS_H
