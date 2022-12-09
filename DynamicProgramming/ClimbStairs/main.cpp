//
// Created by Destiny on 2022/10/26.
//
#include "ClimbStairs.h"

int main() {
  system("chcp 65001");

  ClimbStairs climbStairs;

  int N = 10;
  int ret = climbStairs.climbStairs(N);
  cout << ret << endl;

  int n = 10;
  int ret2 = climbStairs.climbStairs2(n);
  cout << ret2 << endl;

  return 0;
}