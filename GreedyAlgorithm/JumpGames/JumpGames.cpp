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

int JumpGames::jump(vector<int> &nums) {
  int curDistance = 0;
  int ans = 0;
  int nextDistance = 0;
  for (int i = 0; i < nums.size() - 1; ++i) {
    nextDistance = max(i + nums[i], nextDistance);
    if (i == curDistance) {
      curDistance = nextDistance;
      ans++;
    }
  }
  return ans;
}
