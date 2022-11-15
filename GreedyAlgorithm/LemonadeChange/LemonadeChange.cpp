//
// Created by Destiny on 2022/11/15.
//

#include "LemonadeChange.h"

bool LemonadeChange::lemonadeChange(vector<int> &bills) {
  int five = 0, ten = 0, twenty = 0;
  for (int bill : bills) {
    if (bill == 5) {
      five++;
    }
    if (bill == 10) {
      if (five <= 0)
        return false;
      ten++;
      five--;
    }
    if (bill == 20) {
      if (five > 0 && ten > 0) {
        five--;
        ten--;
        twenty++;
      } else if (five >= 3) {
        five -= 3;
        twenty++;
      } else
        return false;
    }
  }
  return true;
}
