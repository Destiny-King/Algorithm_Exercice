//
// Created by Destiny on 2022/10/20.
//

#ifndef RECALLALGORITHM_SPLITPALINDROMESTR_H
#define RECALLALGORITHM_SPLITPALINDROMESTR_H

#include <iostream>
#include <vector>
using namespace std;

class SplitPalindromeStr {
private:
  vector<vector<string>> result;
  vector<string> path;
  void backtracking(const string &s, int startIndex);
  bool isPalindrome(const string &s, int start, int end);

public:
  vector<vector<string>> partition(string s);
};

#endif // RECALLALGORITHM_SPLITPALINDROMESTR_H
