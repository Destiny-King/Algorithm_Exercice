//
// Created by Destiny on 2022/7/5.
//
#include "CanConstruct.h"

int main() {
  system("chcp 65001");

  CanConstruct canConstruct;

  string ransomNote = "aa";
  string magazine = "aab";
  bool b = canConstruct.canConstruct(ransomNote, magazine);
  cout << b << endl;

  bool b2 = canConstruct.canConstruct_Hash(ransomNote, magazine);
  cout << b2 << endl;

  return 0;
}