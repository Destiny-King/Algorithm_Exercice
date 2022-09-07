//
// Created by Destiny on 2022/7/5.
//
#include "LeftRotatedStr.h"

int main() {
  system("chcp 65001");

  LeftRotatedStr leftRotatedStr;

  string s = "abcdefg";
  int n = 2;
  string str = leftRotatedStr.reverseLeftWord(s, n);

  for (int i = 0; i < str.size(); ++i) {
    cout << str[i] << " ";
  }
  cout << endl;

  return 0;
}