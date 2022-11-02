//
// Created by Destiny on 2022/10/20.
//
#include "JumpGames.h"

int main() {
  system("chcp 65001");

  JumpGames jumpGames;

  vector<int> nums = {2, 3, 1, 1, 4};
  bool b = jumpGames.canJump(nums);
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}