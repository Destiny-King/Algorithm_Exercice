//
// Created by Destiny on 2022/11/12.
//
#include "SolveNQueens.h"

int main() {
  system("chcp 65001");

  SolveNQueens solveNQueens;

  int n = 4;
  vector<vector<string>> ret = solveNQueens.solveNQueens(n);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << endl;
    }
    cout << endl;
  }

  return 0;
}