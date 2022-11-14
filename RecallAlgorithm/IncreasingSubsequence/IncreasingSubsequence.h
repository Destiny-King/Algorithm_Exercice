//
// Created by Destiny on 2022/11/14.
//

#ifndef RECALLALGORITHM_INCREASINGSUBSEQUENCE_H
#define RECALLALGORITHM_INCREASINGSUBSEQUENCE_H

#include <iostream>
#include <vector>
using namespace std;

class IncreasingSubsequence {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &nums, int startIndex);

public:
  vector<vector<int>> findSubsequences(vector<int> &nums);
};

#endif // RECALLALGORITHM_INCREASINGSUBSEQUENCE_H
