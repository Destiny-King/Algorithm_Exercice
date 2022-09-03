//
// Created by Destiny on 2022/7/5.
//
#include "reverseString2.h"

int main() {
  system("chcp 65001");

  ReverseString2 reverseString2;

  string s = "abcdefg";
  int k = 2;
  string str = reverseString2.reverseStr(s, k);

  for (int i = 0; i < str.size(); ++i) {
    cout << str[i] << " ";
  }
  cout << endl;

  string str2 = reverseString2.reverseStr2(s, k);

  for (int j = 0; j < str2.size(); ++j) {
    cout << str2[j] << " ";
  }
  cout << endl;

  return 0;
}