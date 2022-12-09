//
// Created by Destiny on 2022/10/13.
//

#ifndef RECALLALGORITHM_COMBINATIONTOTAL_H
#define RECALLALGORITHM_COMBINATIONTOTAL_H

#include <iostream>
#include <vector>
using namespace std;

class CombinationTotal {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(int targetNum, int k, int sum, int startIndex);
  void backtracking2(vector<int> &candidates, int target, int sum,
                     int startIndex);
  void backtracking3(vector<int> &candidates, int target, int sum,
                     int startIndex, vector<bool> &used);

public:
  vector<vector<int>> combinationSum(int k, int n);
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target);
  vector<vector<int>> combinationSum3(vector<int> &candidates, int target);
};

#endif // RECALLALGORITHM_COMBINATIONTOTAL_H
