//
// Created by Destiny on 2022/8/29.
//

#include "reverseString.h"
#include <algorithm>

void ReverseString::reverseString(vector<char> &s) {
  for (int i = 0, j = s.size() - 1; i < s.size() / 2; ++i, --j) {
    swap(s[i], s[j]);
  }
}

string ReverseString::reverseStr(string s, int k) {
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
