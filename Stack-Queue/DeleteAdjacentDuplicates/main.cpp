//
// Created by Destiny on 2022/7/5.
//
#include "DeleteAdjacentDuplicates.h"

int main() {
  system("chcp 65001");

  DeleteAdjacentDuplicates deleteAdjacentDuplicates;

  string s = "abbaca";
  string ret = deleteAdjacentDuplicates.removeDuplicates(s);
  cout << ret << endl;

  return 0;
}