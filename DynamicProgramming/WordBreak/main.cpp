//
// Created by Destiny on 2022/10/31.
//
#include "WordBreak.h"

int main() {
  system("chcp 65001");

  WordBreak wordBreak;

  string s = "applepenapple";
  vector<string> wordDict = {"apple", "pen"};
  bool ret = wordBreak.wordBreak(s, wordDict);
  cout << ret << endl;

  return 0;
}