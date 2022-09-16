//
// Created by Destiny on 2022/7/5.
//
#include "ValidParentheses.h"

int main() {
  system("chcp 65001");

  ValidParentheses validParentheses;

  string s = "()[]{}";
  bool b = validParentheses.isValid(s);
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}