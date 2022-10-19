//
// Created by Destiny on 2022/10/19.
//

#ifndef RECALLALGORITHM_COMBINATIONTOTAL3_H
#define RECALLALGORITHM_COMBINATIONTOTAL3_H

#include <iostream>
#include <vector>
using namespace std;

class CombinationTotal3 {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &candidates, int target, int sum,
                    int startIndex, vector<bool> &used);

public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target);
};

#endif // RECALLALGORITHM_COMBINATIONTOTAL3_H
