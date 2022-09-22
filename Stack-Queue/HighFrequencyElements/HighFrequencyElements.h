//
// Created by Destiny on 2022/9/22.
//

#ifndef STACK_QUEUE_HIGHFREQUENCYELEMENTS_H
#define STACK_QUEUE_HIGHFREQUENCYELEMENTS_H

#include "stack"
#include <iostream>
#include <vector>
using namespace std;

class mycomparison {
public:
  bool operator()(const pair<int, int> &lhs, const pair<int, int> &rhs);
  ;
};

class HighFrequencyElements {
public:
  vector<int> topKFrequent(vector<int> &nums, int k);
};

#endif // STACK_QUEUE_HIGHFREQUENCYELEMENTS_H
