//
// Created by Destiny on 2022/9/20.
//

#include "DeleteAdjacentDuplicates.h"

string DeleteAdjacentDuplicates::removeDuplicates(string S) {
  string result;
  for (char s : S) {
    if (result.empty() || result.back() != s) {
      result.push_back(s);
    } else {
      result.pop_back();
    }
  }
  return result;
}
