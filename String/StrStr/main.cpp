//
// Created by Destiny on 2022/7/5.
//
#include "StrStr.h"

int main() {
  system("chcp 65001");

  StrStr strStr;

  string haystack = "aabaabaaf";
  string needle = "aabaaf";
  int ret = strStr.strStr(haystack, needle);

  cout << ret << endl;

  return 0;
}