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

public:
  vector<vector<int>> combinationSum3(int k, int n);
};

#endif // RECALLALGORITHM_COMBINATIONTOTAL_H
