//
// Created by Destiny on 2022/9/28.
//

#ifndef MONOTONOUS_STACK_MAXRECTANGLE_H
#define MONOTONOUS_STACK_MAXRECTANGLE_H

#include "stack"
#include <iostream>
#include <vector>
using namespace std;

class MaxRectangle {
public:
  int largestRectangleArea_DoublePointer(vector<int> &heights);

  int largestRectangleArea_DynamicProgramming(vector<int> &heights);

  int largestRectangleArea_MonotonousStack(vector<int> &heights);
};

#endif // MONOTONOUS_STACK_MAXRECTANGLE_H
