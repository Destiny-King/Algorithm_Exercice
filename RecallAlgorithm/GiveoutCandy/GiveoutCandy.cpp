//
// Created by Destiny on 2022/11/15.
//

#include "GiveoutCandy.h"

int GiveoutCandy::candy(vector<int> &ratings) {
  vector<int> candyVec(ratings.size(), 1);
  //从前向后
  for (int i = 1; i < ratings.size(); ++i) {
    if (ratings[i] > ratings[i - 1])
      candyVec[i] = candyVec[i - 1] + 1;
  }
  //从后向前
  for (int i = ratings.size() - 2; i >= 0; i--) {
    if (ratings[i] > ratings[i + 1]) {
      candyVec[i] = max(candyVec[i], candyVec[i + 1] + 1);
    }
  }
  int result = 0;
  for (int i = 0; i < candyVec.size(); ++i) {
    result += candyVec[i];
  }
  return result;
}
