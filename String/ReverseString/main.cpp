//
// Created by Destiny on 2022/7/5.
//
#include "reverseString.h"

int main() {
  system("chcp 65001");

  ReverseString reverseString;

  vector<char> s = {'h', 'e', 'l', 'l', 'o'};
  reverseString.reverseString(s);

  for (int i = 0; i < s.size(); ++i) {
    cout << s[i] << " ";
  }
  cout << endl;

  string s2 = "abcdefg";
  int k = 2;
  string str = reverseString.reverseStr(s2, k);

  for (int i = 0; i < str.size(); ++i) {
    cout << str[i] << " ";
  }
  cout << endl;

  return 0;
}