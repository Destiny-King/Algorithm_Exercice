//
// Created by Destiny on 2022/11/17.
//

#ifndef RECALLALGORITHM_ALLPERMUTE_H
#define RECALLALGORITHM_ALLPERMUTE_H

#include <iostream>
#include <vector>
using namespace std;

class AllPermute {
public:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &nums, vector<bool> &used);
  vector<vector<int>> permute(vector<int> &nums);

  void backtracking2(vector<int> &nums, vector<bool> &used);
  vector<vector<int>> permuteUnique(vector<int> &nums);
};

#endif // RECALLALGORITHM_ALLPERMUTE_H
