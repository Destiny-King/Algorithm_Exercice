//
// Created by Destiny on 2022/7/5.
//
#include "DailyTemperature.h"

int main() {
  system("chcp 65001");

  DailyTemperature dailyTemperature;

  vector<int> result = {73, 74, 75, 71, 69, 72, 76, 73};
  vector<int> ret = dailyTemperature.dailyTemperatures(result);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}