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

  return 0;
}