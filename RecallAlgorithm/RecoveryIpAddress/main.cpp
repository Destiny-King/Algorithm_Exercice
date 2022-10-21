//
// Created by Destiny on 2022/10/19.
//
#include "RecoveryIpAddress.h"

int main() {
  system("chcp 65001");

  RecoveryIpAddress recoveryIpAddress;

  string s = "25525511135";
  vector<string> ret = recoveryIpAddress.restoreIpAddresses(s);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << endl;
  }

  return 0;
}