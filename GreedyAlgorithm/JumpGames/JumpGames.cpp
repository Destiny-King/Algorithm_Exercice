//
// Created by Destiny on 2022/11/2.
//

#include "JumpGames.h"

bool JumpGames::canJump(vector<int> &nums) {
  if (nums.size() == 1)
    return true;
  int cover = 0;
  for (int i = 0; i <= cover; ++i) {
    cover = max(nums[i] + i, cover);
    if (cover >= nums.size() - 1)
      return true;
  }
  return false;
}
