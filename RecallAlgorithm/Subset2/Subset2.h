//
// Created by Destiny on 2022/11/12.
//

#ifndef RECALLALGORITHM_SUBSET2_H
#define RECALLALGORITHM_SUBSET2_H

#include <iostream>
#include <vector>
using namespace std;

class Subset2 {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &nums, int startIndex);

public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums);
};

#endif // RECALLALGORITHM_SUBSET2_H
