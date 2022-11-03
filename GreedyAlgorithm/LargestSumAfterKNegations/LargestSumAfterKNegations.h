//
// Created by Destiny on 2022/11/3.
//

#ifndef GREEDYALGORITHM_LARGESTSUMAFTERKNEGATIONS_H
#define GREEDYALGORITHM_LARGESTSUMAFTERKNEGATIONS_H

#include <iostream>
#include <vector>
using namespace std;

class LargestSumAfterKNegations {
private:
  static bool cmp(int a, int b);

public:
  int largestSumAfterKNegations(vector<int> &nums, int k);
};

#endif // GREEDYALGORITHM_LARGESTSUMAFTERKNEGATIONS_H
