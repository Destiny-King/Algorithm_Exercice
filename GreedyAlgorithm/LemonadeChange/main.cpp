//
// Created by Destiny on 2022/11/15.
//
#include "LemonadeChange.h"

int main() {
  system("chcp 65001");

  LemonadeChange lemonadeChange;

  vector<int> nums = {5, 5, 5, 10, 20};
  bool ret = lemonadeChange.lemonadeChange(nums);
  if (ret == 0) {
    cout << "false" << endl;
  } else if (ret == 1) {
    cout << "true" << endl;
  }

  return 0;
}