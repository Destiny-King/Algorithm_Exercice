//
// Created by Destiny on 2022/11/1.
//

#include "BagProblem.h"

void BagProblem::bagProblem(vector<int> weight, vector<int> value,
                            int bagweight) {
  //二维数组
  vector<vector<int>> dp(weight.size(), vector<int>(bagweight + 1, 0));
  //初始化
  for (int j = weight[0]; j <= bagweight; ++j) {
    dp[0][j] = value[0];
  }
  // weight数组的大小，就是物品个数
  for (int i = 1; i < weight.size(); ++i) { //遍历物品
    for (int j = 0; j <= bagweight; ++j) {  //遍历背包容量
      if (j < weight[i])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
    }
  }
  cout << dp[weight.size() - 1][bagweight] << endl;
}

//一维数组
void BagProblem::bagProblem2(vector<int> weight, vector<int> value,
                             int bagWeight) {
  //初始化
  vector<int> dp(bagWeight + 1, 0);
  for (int i = 0; i < weight.size(); ++i) {        //遍历物品
    for (int j = bagWeight; j >= weight[i]; j--) { //遍历背包容量
      dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
    }
  }
  cout << dp[bagWeight] << endl;
}
