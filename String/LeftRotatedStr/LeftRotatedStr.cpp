//
// Created by Destiny on 2022/9/7.
//

#include "LeftRotatedStr.h"
#include <algorithm>

string LeftRotatedStr::reverseLeftWord(string s, int n) {
  reverse(s.begin(), s.begin() + n);
  reverse(s.begin() + n, s.end());
  reverse(s.begin(), s.end());
  return s;
}
