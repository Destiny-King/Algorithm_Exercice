//
// Created by Destiny on 2022/7/5.
//
#include "SpiralMatrix.h"

int main() {
  system("chcp 65001");

  int val = 4;
  SpiralMatrix matrix;
  vector<vector<int>> result = matrix.generateMatrix(val);

  cout << "正整数" << val << "的螺旋矩阵为：" << endl;
  for (int i = 0; i < val; ++i) {
    for (int j = 0; j < val; ++j) {
      cout << result[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}