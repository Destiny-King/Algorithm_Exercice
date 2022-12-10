//
// Created by Destiny on 2022/10/27.
//

#ifndef DYNAMICPROGRAMMING_DIFFERENTPATHS_H
#define DYNAMICPROGRAMMING_DIFFERENTPATHS_H

#include <iostream>
#include <vector>
using namespace std;

class DifferentPaths {
public:
  int uniquePaths(int m, int n);
  int uniquePaths_NumberTheory(int m, int n);
  int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid);
};

#endif // DYNAMICPROGRAMMING_DIFFERENTPATHS_H
