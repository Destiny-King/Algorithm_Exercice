//
// Created by Destiny on 2022/7/5.
//
#include "FourSumCount.h"

int main() {
  system("chcp 65001");

  FourSumCount fourSumCount;

  vector<int> A = {1, 2};
  vector<int> B = {-2, -1};
  vector<int> C = {-1, 2};
  vector<int> D = {0, 2};
  int ret = fourSumCount.fourSumCount(A, B, C, D);

  cout << ret << endl;

  return 0;
}