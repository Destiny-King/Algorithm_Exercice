//
// Created by Destiny on 2022/9/9.
//

#include "StrStr.h"

//得到next数组
void StrStr::getNext(int *next, const string &s) {
  int j = 0;
  next[0] = 0;
  for (int i = 1; i < s.size(); ++i) {
    //前后缀不相等
    while (j > 0 && s[i] != s[j]) {
      j = next[j - 1];
    }
    //前后缀相等
    if (s[i] == s[j]) {
      j++;
    }
    next[i] = j;
  }
}

int StrStr::strStr(string haystack, string needle) {
  if (needle.size() == 0) {
    return 0;
  }
  int next[needle.size()];
  getNext(next, needle);
  int j = 0;
  for (int i = 0; i < haystack.size(); ++i) {
    while (j > 0 && haystack[i] != needle[j]) {
      j = next[j - 1];
    }
    if (haystack[i] == needle[j]) {
      j++;
    }
    if (j == needle.size()) {
      return (i - needle.size() + 1);
    }
  }
  return -1;
}
