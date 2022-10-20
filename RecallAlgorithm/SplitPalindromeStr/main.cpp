//
// Created by Destiny on 2022/10/20.
//
#include "SplitPalindromeStr.h"

int main() {
  system("chcp 65001");

  SplitPalindromeStr splitPalindromeStr;

  string str = "aab";
  vector<vector<string>> ret = splitPalindromeStr.partition(str);
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}