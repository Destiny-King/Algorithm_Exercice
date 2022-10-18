//
// Created by Destiny on 2022/10/18.
//

#ifndef RECALLALGORITHM_COMBINATIONPHONENUMBERS_H
#define RECALLALGORITHM_COMBINATIONPHONENUMBERS_H

#include <iostream>
#include <vector>
using namespace std;

class CombinationPhoneNumbers {
private:
  const string letterMap[10] = {
      "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz",
  };

public:
  vector<string> result;
  string s;
  void backtracking(const string &digits, int index);
  vector<string> letterCombinations(string digits);
};

#endif // RECALLALGORITHM_COMBINATIONPHONENUMBERS_H
