//
// Created by Destiny on 2022/10/26.
//
#include "DifferentPaths.h"

int main() {
  system("chcp 65001");

  DifferentPaths differentPaths;

  int m = 3;
  int n = 7;
  int ret = differentPaths.uniquePaths(m, n);
  int ret2 = differentPaths.uniquePaths_NumberTheory(m, n);
  cout << ret << endl;
  cout << ret2 << endl;

  vector<vector<int>> obstacleGrid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  int ret3 = differentPaths.uniquePathsWithObstacles(obstacleGrid);
  cout << ret3 << endl;

  return 0;
}