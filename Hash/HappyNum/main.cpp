//
// Created by Destiny on 2022/7/5.
//
#include "HappyNum.h"

int main() {
  system("chcp 65001");

  HappyNum happyNum;

  int n = 19;
  happyNum.getNum(n);
  bool b = happyNum.isHappy(n);
  cout << b << endl;

  return 0;
}