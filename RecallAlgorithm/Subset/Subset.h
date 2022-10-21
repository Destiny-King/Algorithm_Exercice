//
// Created by Destiny on 2022/10/21.
//

#ifndef RECALLALGORITHM_SUBSET_H
#define RECALLALGORITHM_SUBSET_H

#include <iostream>
#include <vector>
using namespace std;

class Subset {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &nums, int startIndex);

public:
  vector<vector<int>> subsets(vector<int> &nums);
};

#endif // RECALLALGORITHM_SUBSET_H
