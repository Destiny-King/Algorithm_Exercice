//
// Created by Destiny on 2022/10/9.
//
#include "CombinationPhoneNumbers.h"

int main() {
  system("chcp 65001");

  CombinationPhoneNumbers combinationPhoneNumbers;

  string str = "23";
  vector<string> ret = combinationPhoneNumbers.letterCombinations(str);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << endl;
  }

  return 0;
}