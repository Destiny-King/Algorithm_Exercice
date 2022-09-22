//
// Created by Destiny on 2022/9/22.
//

#ifndef STACK_QUEUE_SLIDEWINDOWMAX_H
#define STACK_QUEUE_SLIDEWINDOWMAX_H

#include "stack"
#include <iostream>
#include <vector>
using namespace std;

class MyQueue {
public:
  void pop(int value);
  void push(int value);
  int front();

  deque<int> que; //使用deque来实现单调队列
};

class SlideWindowMax {
public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k);
};

#endif // STACK_QUEUE_SLIDEWINDOWMAX_H
