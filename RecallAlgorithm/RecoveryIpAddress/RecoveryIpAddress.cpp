//
// Created by Destiny on 2022/10/21.
//

#include "RecoveryIpAddress.h"

void RecoveryIpAddress::backtracking(string &s, int startIndex, int pointNum) {
  // startIndex: 搜索的起始位置，pointNum: 添加逗点的数量
  if (pointNum == 3) {
    //判断第四段字符串是否合法
    if (isValid(s, startIndex, s.size() - 1)) {
      result.push_back(s);
    }
    return;
  }
  for (int i = startIndex; i < s.size(); ++i) {
    if (isValid(s, startIndex, i)) {
      s.insert(s.begin() + i + 1, '.');
      pointNum++;
      backtracking(s, i + 2, pointNum);
      pointNum--;
      s.erase(s.begin() + i + 1); //回溯删除逗点
    } else
      break;
  }
}

//判断字符串s在左闭右闭区间所组成的数字是否合法
bool RecoveryIpAddress::isValid(const string &s, int start, int end) {
  if (start > end) {
    return false;
  }
  if (s[start] == '0' && start != end) {
    return false;
  }
  int num = 0;
  for (int i = start; i <= end; ++i) {
    if (s[i] > '9' || s[i] < '0') {
      return false;
    }
    num = num * 10 + (s[i] - '0');
    if (num > 255) {
      return false;
    }
  }
  return true;
}

vector<string> RecoveryIpAddress::restoreIpAddresses(string s) {
  result.clear();
  if (s.size() < 4 || s.size() > 12)
    return result;
  backtracking(s, 0, 0);
  return result;
}