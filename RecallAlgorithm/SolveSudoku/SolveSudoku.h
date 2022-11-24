//
// Created by Destiny on 2022/11/24.
//

#ifndef RECALLALGORITHM_SOLVESUDOKU_H
#define RECALLALGORITHM_SOLVESUDOKU_H

#include <iostream>
#include <vector>
using namespace std;

class SolveSudoku {
private:
  bool backtracking(vector<vector<char>> &board);
  bool isValid(int row, int col, char val, vector<vector<char>> &board);

public:
  void solveSudoku(vector<vector<char>> &board);
};

#endif // RECALLALGORITHM_SOLVESUDOKU_H
