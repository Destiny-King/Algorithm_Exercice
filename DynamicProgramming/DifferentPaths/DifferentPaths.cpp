//
// Created by Destiny on 2022/10/27.
//

#include "DifferentPaths.h"

//深搜
int DifferentPaths::uniquePaths(int m, int n) {
  vector<vector<int>> dp(m, vector<int>(n, 0));
  for (int i = 0; i < m; ++i) {
    dp[i][0] = 1;
  }
  for (int j = 0; j < n; ++j) {
    dp[0][j] = 1;
  }
  for (int i = 1; i < m; ++i) {
    for (int j = 1; j < n; ++j) {
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }
  return dp[m - 1][n - 1];
}

//数论
int DifferentPaths::uniquePaths_NumberTheory(int m, int n) {
  long long numerator = 1; //分子
  int denominator = m - 1; //分母
  int count = m - 1;
  int t = m + n - 2;
  while (count--) {
    numerator *= (t--);
    while (denominator != 0 && numerator % denominator == 0) {
      numerator /= denominator;
      denominator--;
    }
  }
  return numerator;
}

int DifferentPaths::uniquePathsWithObstacles(
    vector<vector<int>> &obstacleGrid) {
  int m = obstacleGrid.size();
  int n = obstacleGrid[0].size();
  if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1)
    return 0;
  vector<vector<int>> dp(m, vector<int>(n, 0));
  for (int i = 0; i < m && obstacleGrid[i][0] == 0; ++i) {
    dp[i][0] = 1;
  }
  for (int j = 0; j < n && obstacleGrid[0][j] == 0; ++j) {
    dp[0][j] = 1;
  }
  for (int i = 1; i < m; ++i) {
    for (int j = 1; j < n; ++j) {
      if (obstacleGrid[i][j] == 1)
        continue;
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }

  return dp[m - 1][n - 1];
}
