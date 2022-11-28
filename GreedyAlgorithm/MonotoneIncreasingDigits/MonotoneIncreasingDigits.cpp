//
// Created by Destiny on 2022/11/28.
//

#include "MonotoneIncreasingDigits.h"

int MonotoneIncreasingDigits::monotoneIncreasingDigits(int N) {
  string strNum = to_string(N);
  int flag = strNum.size();
  for (int i = strNum.size() - 1; i > 0; i--) {
    if (strNum[i - 1] > strNum[i]) {
      flag = i;
      strNum[i - 1]--;
    }
  }
  for (int i = flag; i < strNum.size(); ++i) {
    strNum[i] = '9';
  }
  return stoi(strNum); //将数字字符转化为int
}
