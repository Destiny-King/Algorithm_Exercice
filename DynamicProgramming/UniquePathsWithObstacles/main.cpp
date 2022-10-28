//
// Created by Destiny on 2022/10/26.
//
#include "UniquePathsWithObstacles.h"

int main() {
  system("chcp 65001");

  UniquePathsWithObstacles uniquePathsWithObstacles;

  vector<vector<int>> obstacleGrid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  int ret = uniquePathsWithObstacles.uniquePathsWithObstacles(obstacleGrid);
  cout << ret << endl;

  return 0;
}