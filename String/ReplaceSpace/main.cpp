//
// Created by Destiny on 2022/7/5.
//
#include "ReplaceSpace.h"

int main() {
  system("chcp 65001");

  ReplaceSpace replaceSpace;

  string s = "We are happy.";
  string str = replaceSpace.replaceSpace(s);

  for (int i = 0; i < str.size(); ++i) {
    cout << str[i];
  }
  cout << endl;

  return 0;
}