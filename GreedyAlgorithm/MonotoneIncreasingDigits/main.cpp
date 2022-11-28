//
// Created by Destiny on 2022/11/15.
//
#include "MonotoneIncreasingDigits.h"

int main() {
  system("chcp 65001");

  MonotoneIncreasingDigits monotoneIncreasingDigits;

  int N = 332;
  int ret = monotoneIncreasingDigits.monotoneIncreasingDigits(N);
  cout << ret << endl;

  return 0;
}