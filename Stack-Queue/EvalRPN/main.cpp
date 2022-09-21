//
// Created by Destiny on 2022/7/5.
//
#include "EvalRPN.h"

int main() {
  system("chcp 65001");

  EvalRPN evalRpn;

  vector<string> tokens = {"10", "6", "9",  "3", "+", "-11", "*",
                           "/",  "*", "17", "+", "5", "+"};
  int ret = evalRpn.evalRPN(tokens);
  cout << ret << endl;

  return 0;
}