//
// Created by Destiny on 2022/8/23.
//

#include "HappyNum.h"
#include <unordered_set>

//获取快乐数
int HappyNum::getNum(int n) {
  int sum = 0;
  while (n) {
    sum += (n % 10) * (n % 10);
    n /= 10;
  }
  return sum;
}

//判断是否是快乐数
bool HappyNum::isHappy(int n) {
  unordered_set<int> set;
  while (1) {
    int sum = getNum(n);
    if (sum == 1) {
      return true;
    } else if (set.find(sum) != set.end()) {
      return false;
    } else {
      set.insert(sum);
    }
    n = sum;
  }
}
