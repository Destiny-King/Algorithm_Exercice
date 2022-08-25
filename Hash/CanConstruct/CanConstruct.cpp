//
// Created by Destiny on 2022/8/25.
//

#include "CanConstruct.h"

//暴力解法
bool CanConstruct::canConstruct(string ransomNote, string magazine) {
  for (int i = 0; i < magazine.size(); ++i) {
    for (int j = 0; j < ransomNote.size(); ++j) {
      //在ransom中找到和magazine相同字符
      if (magazine[i] == ransomNote[j]) {
        ransomNote.erase(ransomNote.begin() + j); //删除这个字符
        break;
      }
    }
  }
  //如果ransomNote为空
  if (ransomNote.length() == 0) {
    return true;
  }
  return false;
}

//哈希解法
bool CanConstruct::canConstruct_Hash(string ransomNote, string magazine) {
  int record[26] = {0};
  if (ransomNote.size() > magazine.size()) {
    return false;
  }

  for (int i = 0; i < magazine.size(); ++i) {
    //通过record数据记录magazine里各字符出现的次数
    record[magazine[i] - 'a']++;
  }

  for (int j = 0; j < ransomNote.size(); ++j) {
    record[ransomNote[j] - 'a']--;
    if (record[ransomNote[j] - 'a'] < 0) {
      return false;
    }
  }
  return true;
}
