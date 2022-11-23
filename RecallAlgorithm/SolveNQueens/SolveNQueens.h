//
// Created by Destiny on 2022/11/23.
//

#ifndef RECALLALGORITHM_SOLVENQUEENS_H
#define RECALLALGORITHM_SOLVENQUEENS_H

#include <iostream>
#include <vector>
using namespace std;

class SolveNQueens {
private:
  vector<vector<string>> result;
  void backtracking(int n, int row, vector<string> &chessboard);
  bool isValid(int row, int col, vector<string> &chessboard, int n);

public:
  vector<vector<string>> solveNQueens(int n);
};

#endif // RECALLALGORITHM_SOLVENQUEENS_H
