//
// Created by Destiny on 2022/9/6.
//

#include "FlipString.h"

//翻转字符串
void FlipString::reverse(string &s, int start, int end) {
  for (int i = start, j = end; i < j; i++, j--) {
    swap(s[i], s[j]);
  }
}

//移除多余空格
void FlipString::removeExtraSpaces(string &s) {
  int slow = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != ' ') {
      if (slow != 0)
        s[slow++] = ' ';

      while (i < s.size() && s[i] != ' ') {
        s[slow++] = s[i++];
      }
    }
  }
  s.resize(slow);
}

//翻转单词s
string FlipString::reverseWords(string s) {
  removeExtraSpaces(s);
  reverse(s, 0, s.size() - 1);
  int start = 0;
  for (int i = 0; i <= s.size(); ++i) {
    if (i == s.size() || s[i] == ' ') {
      reverse(s, start, i - 1);
      start = i + 1;
    }
  }
  return s;
}
