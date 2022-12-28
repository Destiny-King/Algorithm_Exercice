//
// Created by Destiny on 2022/12/19.
//

#ifndef DYNAMICPROGRAMMING_MAXPROFIT_H
#define DYNAMICPROGRAMMING_MAXPROFIT_H

#include <iostream>
#include <vector>
using namespace std;

class MaxProfit {
public:
  int maxProfit(vector<int> &prices);
  int maxProfit2(vector<int> &prices);
  int maxProfit3(vector<int> &prices);
  int maxProfit4(int k, vector<int> &prices);
  int maxProfit5(vector<int> &prices);          //含冰冻期
  int maxProfit6(vector<int> &prices, int fee); //含手续费
};

#endif // DYNAMICPROGRAMMING_MAXPROFIT_H
