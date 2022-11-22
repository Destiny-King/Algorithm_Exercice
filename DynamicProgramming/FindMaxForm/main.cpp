//
// Created by Destiny on 2022/10/31.
//
#include "FindMaxForm.h"

int main() {
  system("chcp 65001");

  FindMaxForm findMaxForm;

  vector<string> nums = {"10", "0001", "111001", "1", "0"};
  int m = 5, n = 3;
  int ret = findMaxForm.findMaxForm(nums, m, n);
  cout << ret << endl;

  return 0;
}