//
// Created by Destiny on 2022/9/27.
//

#ifndef MONOTONOUS_STACK_PICKUPRAIN_H
#define MONOTONOUS_STACK_PICKUPRAIN_H

#include "stack"
#include <iostream>
#include <vector>
using namespace std;

class PickupRain {
public:
  int trap_DoublePointer(vector<int> &height);

  int trap_DynamicProgramming(vector<int> &height);

  int trap_MonotonousStack(vector<int> &height);
};

#endif // MONOTONOUS_STACK_PICKUPRAIN_H
