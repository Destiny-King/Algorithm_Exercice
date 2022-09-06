//
// Created by Destiny on 2022/7/5.
//
#include "FlipString.h"

int main() {
  system("chcp 65001");

  FlipString flipString;

  string s = "the sky is blue";
  string str = flipString.reverseWords(s);

  for (int i = 0; i < str.size(); ++i) {
    cout << str[i];
  }
  cout << endl;

  return 0;
}