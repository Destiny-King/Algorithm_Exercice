//
// Created by Destiny on 2022/12/7.
//

#ifndef DYNAMICPROGRAMMING_CHANGE_H
#define DYNAMICPROGRAMMING_CHANGE_H

#include <iostream>
#include <vector>
using namespace std;

class Change {
public:
  int change(int amount, vector<int> &coins);
  int coinChange(vector<int> &coins, int amount);
};

#endif // DYNAMICPROGRAMMING_CHANGE_H
