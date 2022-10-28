//
// Created by Destiny on 2022/10/26.
//
#include "IntegerSplit.h"

int main() {
  system("chcp 65001");

  IntegerSplit integerSplit;

  int n = 10;
  int ret = integerSplit.integerBreak(n);
  cout << ret << endl;

  return 0;
}