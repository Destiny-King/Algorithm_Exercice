//
// Created by Destiny on 2022/7/5.
//
#include "Anagram.h"

int main() {
  system("chcp 65001");

  Anagram anagram;

  string s = "anagram";
  string t = "nagaram";
  bool b = anagram.isAnagram(s, t);

  cout << b << endl;

  return 0;
}