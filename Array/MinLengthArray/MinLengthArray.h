//
// Created by Destiny on 2022/7/18.
//

#ifndef ARRAY_MINLENGTHARRAY_H
#define ARRAY_MINLENGTHARRAY_H

#include <iostream>
#include <vector>
using namespace std;

class MinLengthArray {
public:
  int minSubArrayLen(int s, vector<int> &nums);             //暴力解法
  int minSubArrayLen_SlideWindow(int s, vector<int> &nums); //滑动窗口
};

#endif // ARRAY_MINLENGTHARRAY_H
