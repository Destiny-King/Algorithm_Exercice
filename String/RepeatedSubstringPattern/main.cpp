//
// Created by Destiny on 2022/7/5.
//
#include "RepeatedSubstringPattern.h"

int main() {
  system("chcp 65001");

  RepeatedSubstringPattern repeatedSubstringPattern;

  string str = "abcabcabcabc";
  bool b = repeatedSubstringPattern.repeatedSubstringPattern(str);

  if (b == 1) {
    cout << "true" << endl;
  } else if ((b == 0)) {
    cout << "false" << endl;
  }

  return 0;
}