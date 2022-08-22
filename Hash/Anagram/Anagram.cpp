//
// Created by Destiny on 2022/8/22.
//

#include "Anagram.h"

//暴力解法
bool Anagram::isAnagram(string s, string t) {
  int record[26] = {0};
  for (int i = 0; i < s.size(); ++i) {
    //求出一个相对数值
    record[s[i] - 'a']++;
  }

  for (int i = 0; i < t.size(); ++i) {
    record[t[i] - 'a']--;
  }

  for (int i = 0; i < 26; ++i) {
    if (record[i] != 0) {
      return false;
    }
  }
  return true;
}
