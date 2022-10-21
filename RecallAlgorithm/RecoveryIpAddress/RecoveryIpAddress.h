//
// Created by Destiny on 2022/10/21.
//

#ifndef RECALLALGORITHM_RECOVERYIPADDRESS_H
#define RECALLALGORITHM_RECOVERYIPADDRESS_H

#include <iostream>
#include <vector>
using namespace std;

class RecoveryIpAddress {
private:
  vector<string> result; //记录结果
  void backtracking(string &s, int startIndex, int pointNum);
  bool isValid(const string &s, int start, int end);

public:
  vector<string> restoreIpAddresses(string s);
};

#endif // RECALLALGORITHM_RECOVERYIPADDRESS_H
