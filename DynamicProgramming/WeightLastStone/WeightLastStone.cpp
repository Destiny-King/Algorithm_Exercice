//
// Created by Destiny on 2022/11/16.
//

#include "WeightLastStone.h"

int WeightLastStone::lastStoneWeightII(vector<int> &stones) {
  vector<int> dp(15001, 0);
  int sum = 0;
  for (int i = 0; i < stones.size(); ++i) {
    sum += stones[i];
  }
  int target = sum / 2;
  for (int i = 0; i < stones.size(); ++i) {
    for (int j = target; j >= stones[i]; j--) {
      dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
    }
  }
  return sum - dp[target] - dp[target];
}
