//
// Created by Destiny on 2022/11/23.
//

#include "SolveNQueens.h"

void SolveNQueens::backtracking(int n, int row, vector<string> &chessboard) {
  if (row == n) {
    result.push_back(chessboard);
    return;
  }
  for (int col = 0; col < n; ++col) {
    if (isValid(row, col, chessboard, n)) {
      chessboard[row][col] = 'Q';
      backtracking(n, row + 1, chessboard);
      chessboard[row][col] = '.';
    }
  }
}

bool SolveNQueens::isValid(int row, int col, vector<string> &chessboard,
                           int n) {
  //检查列
  for (int i = 0; i < row; ++i) {
    if (chessboard[i][col] == 'Q') {
      return false;
    }
  }
  //检查45度角
  for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
    if (chessboard[i][j] == 'Q') {
      return false;
    }
  }
  //检查135度角
  for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
    if (chessboard[i][j] == 'Q') {
      return false;
    }
  }
  return true;
}

vector<vector<string>> SolveNQueens::solveNQueens(int n) {
  result.clear();
  vector<string> chessboard(n, string(n, '.'));
  backtracking(n, 0, chessboard);
  return result;
}
