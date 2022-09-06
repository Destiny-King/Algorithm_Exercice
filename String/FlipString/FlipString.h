//
// Created by Destiny on 2022/9/6.
//

#ifndef STRING_FLIPSTRING_H
#define STRING_FLIPSTRING_H

#include <iostream>
#include <string>
using namespace std;

class FlipString {
public:
  void reverse(string &s, int start, int end);
  void removeExtraSpaces(string &s);
  string reverseWords(string s);
};

#endif // STRING_FLIPSTRING_H
