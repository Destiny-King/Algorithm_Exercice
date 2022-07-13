//
// Created by Destiny on 2022/7/13.
//

#ifndef ARRAY_ARRAYSQUARE_H
#define ARRAY_ARRAYSQUARE_H

#include <iostream>
#include <vector>
using namespace std;

class ArraySquare {
public:
  vector<int> arraySquare_Violent(vector<int> &nums);       //暴力解法
  vector<int> arraySquare_DoublePointer(vector<int> &nums); //双指针解法
};

#endif // ARRAY_ARRAYSQUARE_H
