//
// Created by Destiny on 2022/12/14.
//

#ifndef DYNAMICPROGRAMMING_ROB_H
#define DYNAMICPROGRAMMING_ROB_H

#include <iostream>
#include <vector>
using namespace std;

class Rob {
public:
  int rob(vector<int> &nums);
  int rob2(vector<int> &nums);
  int robRange(vector<int> &nums, int start, int end);
};

#endif // DYNAMICPROGRAMMING_ROB_H
