//
// Created by Destiny on 2022/10/24.
//

#include "DistributionBiscuits.h"
#include "algorithm"

int DistributionBiscuits::findContentChildren(vector<int> &g, vector<int> &s) {
  sort(g.begin(), g.begin());
  sort(s.begin(), s.begin());
  int index = 0; //孩子指针
  for (int i = 0; i < s.size(); ++i) {
    if (index < g.size() && g[index] <= s[i]) {
      index++;
    }
  }
  return index;
}
