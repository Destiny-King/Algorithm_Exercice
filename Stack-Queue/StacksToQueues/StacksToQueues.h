//
// Created by Destiny on 2022/9/15.
//

#ifndef STRING_STACKSTOQUEUES_H
#define STRING_STACKSTOQUEUES_H

#include "stack"
#include <iostream>
using namespace std;

class StacksToQueues {
public:
  StacksToQueues();

  void push(int x);

  int pop();

  int peek();

  bool empty();

  stack<int> stIn;
  stack<int> stOut;
};

#endif // STRING_STACKSTOQUEUES_H
