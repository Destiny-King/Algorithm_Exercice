//
// Created by Destiny on 2022/10/20.
//

#include "SplitPalindromeStr.h"

void SplitPalindromeStr::backtracking(const string &s, int startIndex) {
  if (startIndex >= s.size()) {
    result.push_back(path);
    return;
  }
  for (int i = startIndex; i < s.size(); ++i) {
    if (isPalindrome(s, startIndex, i)) {
      string str = s.substr(startIndex, i - startIndex + 1);
      path.push_back(str);
    } else {
      continue;
    }
    backtracking(s, i + 1);
    path.pop_back();
  }
}

bool SplitPalindromeStr::isPalindrome(const string &s, int start, int end) {
  for (int i = start, j = end; i < j; i++, j--) {
    if (s[i] != s[j]) {
      return false;
    }
  }
  return true;
}

vector<vector<string>> SplitPalindromeStr::partition(string s) {
  result.clear();
  path.clear();
  backtracking(s, 0);
  return result;
}
