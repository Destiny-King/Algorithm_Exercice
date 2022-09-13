//
// Created by Destiny on 2022/9/9.
//

#ifndef STRING_STRSTR_H
#define STRING_STRSTR_H

#include <iostream>
#include <string>
using namespace std;

class StrStr {
public:
  void getNext(int *next, const string &s);

  int strStr(string haystack, string needle);
};

#endif // STRING_STRSTR_H
