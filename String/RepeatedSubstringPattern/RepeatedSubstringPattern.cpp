//
// Created by Destiny on 2022/9/14.
//

#include "RepeatedSubstringPattern.h"

// next数组
void RepeatedSubstringPattern::getNext(int *next, const string &s) {
  // 1、初始化
  next[0] = 0;
  int j = 0;
  for (int i = 1; i < s.size(); ++i) {
    // 2、处理前后缀不相同的情况
    while (j > 0 && s[i] != s[j]) {
      j = next[j - 1];
    }
    // 3、处理前后缀相同的情况
    if (s[i] == s[j]) {
      j++;
    }
    next[i] = j;
  }
}

bool RepeatedSubstringPattern::repeatedSubstringPattern(string s) {
  if (s.size() == 0) {
    return false;
  }
  int next[s.size()];
  getNext(next, s);
  int len = s.size();
  if (next[len - 1] != 0 && len % (len - (next[len - 1])) == 0) {
    return true;
  }
  return false;
}
