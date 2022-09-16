//
// Created by Destiny on 2022/9/16.
//

#ifndef STACK_QUEUE_QUEUESTOSTACKS_H
#define STACK_QUEUE_QUEUESTOSTACKS_H

#include "queue"
#include <iostream>
using namespace std;

class QueuesToStacks {
public:
  QueuesToStacks();

  void push(int x);

  int pop();

  int top();

  bool empty();

  queue<int> que;
};

#endif // STACK_QUEUE_QUEUESTOSTACKS_H
