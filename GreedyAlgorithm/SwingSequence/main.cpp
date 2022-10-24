//
// Created by Destiny on 2022/10/20.
//
#include "SwingSequence.h"

int main() {
  system("chcp 65001");

  SwingSequence swingSequence;

  vector<int> nums = {1, 7, 4, 9, 2, 5};
  int ret = swingSequence.wiggleMaxLength(nums);
  cout << ret << endl;

  return 0;
}