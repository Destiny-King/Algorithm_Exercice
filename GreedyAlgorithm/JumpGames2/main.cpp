//
// Created by Destiny on 2022/10/20.
//
#include "JumpGames2.h"

int main() {
  system("chcp 65001");

  JumpGames2 jumpGames2;

  vector<int> nums = {2, 3, 1, 1, 4};
  int ret = jumpGames2.jump(nums);
  cout << ret << endl;

  return 0;
}