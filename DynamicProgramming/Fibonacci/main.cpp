//
// Created by Destiny on 2022/10/26.
//
#include "Fibonacci.h"

int main() {
  system("chcp 65001");

  Fibonacci fibonacci;

  int N = 10;
  int ret = fibonacci.Fib(N);
  cout << ret << endl;

  return 0;
}