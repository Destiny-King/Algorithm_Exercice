//
// Created by Destiny on 2022/9/14.
//

#ifndef STRING_REPEATEDSUBSTRINGPATTERN_H
#define STRING_REPEATEDSUBSTRINGPATTERN_H

#include <iostream>
#include <string>
using namespace std;

class RepeatedSubstringPattern {
public:
  void getNext(int *next, const string &s);

  bool repeatedSubstringPattern(string s);
};

#endif // STRING_REPEATEDSUBSTRINGPATTERN_H
