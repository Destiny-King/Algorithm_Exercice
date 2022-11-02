//
// Created by Destiny on 2022/11/2.
//

#include "JumpGames2.h"

int JumpGames2::jump(vector<int> &nums) {
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
