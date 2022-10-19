//
// Created by Destiny on 2022/10/19.
//

#ifndef RECALLALGORITHM_COMBINATIONTOTAL2_H
#define RECALLALGORITHM_COMBINATIONTOTAL2_H

#include <iostream>
#include <vector>
using namespace std;

class CombinationTotal2 {
private:
  vector<vector<int>> result;
  vector<int> path;
  void backtracking(vector<int> &candidates, int target, int sum,
                    int startIndex);

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target);
};

#endif // RECALLALGORITHM_COMBINATIONTOTAL2_H
