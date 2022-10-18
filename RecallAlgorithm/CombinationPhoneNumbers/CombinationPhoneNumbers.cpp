//
// Created by Destiny on 2022/10/18.
//

#include "CombinationPhoneNumbers.h"

void CombinationPhoneNumbers::backtracking(const string &digits, int index) {
  if (index == digits.size()) {
    result.push_back(s);
    return;
  }
  int digit = digits[index] - '0';
  string letters = letterMap[digit];
  for (int i = 0; i < letters.size(); ++i) {
    s.push_back(letters[i]);
    backtracking(digits, index + 1);
    s.pop_back();
  }
}

vector<string> CombinationPhoneNumbers::letterCombinations(string digits) {
  s.clear();
  result.clear();
  if (digits.size() == 0) {
    return result;
  }
  backtracking(digits, 0);
  return result;
}
