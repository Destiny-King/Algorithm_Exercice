//
// Created by Destiny on 2022/9/3.
//

#include "ReverseString2.h"
#include <algorithm>

//使用C++库函数
string ReverseString2::reverseStr(string s, int k) {
  for (int i = 0; i < s.size(); i += (2 * k)) {
    // 1.每隔2k个字符的前k个字符进行反转
    // 2.剩余字符小于2k但大于或等于k个，则反转前k个字符
    if (i + k <= s.size()) {
      reverse(s.begin() + i, s.begin() + i + k);
    } else {
      // 3.剩余字符少于k个，则将剩余字符全部反转
      reverse(s.begin() + i, s.end());
    }
  }

  return s;
}

string ReverseString2::reverseStr2(string s, int k) {
  int n = s.size(), pos = 0;
  while (pos + k < n) {
    //剩余字符串大于等于k的情况
    if (pos + k < n)
      reverse(s.begin() + pos, s.begin() + pos + k);
    //剩余字符串不足k的情况
    else
      reverse(s.begin() + pos, s.end());
    pos += 2 * k;
  }

  return s;
}
