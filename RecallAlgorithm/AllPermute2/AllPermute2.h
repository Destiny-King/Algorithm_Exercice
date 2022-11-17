//
// Created by Destiny on 2022/11/17.
//

#ifndef RECALLALGORITHM_ALLPERMUTE2_H
#define RECALLALGORITHM_ALLPERMUTE2_H

#include <iostream>
#include <vector>
using namespace std;

class AllPermute2 {
public:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &nums, vector<bool> &used);
  vector<vector<int>> permuteUnique(vector<int> &nums);
};

#endif // RECALLALGORITHM_ALLPERMUTE2_H
