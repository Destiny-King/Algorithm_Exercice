//
// Created by Destiny on 2022/7/4.
//

#ifndef ARRAY_BINARY_H
#define ARRAY_BINARY_H

#include <iostream>
#include <vector>
using namespace std;

class Binary {
public:
  int search_LeftClosed_RightClosed(vector<int> &nums, int target); //左闭右闭
  int search_LeftClosed_RightOpened(vector<int> &nums, int target); //左闭右开
};

#endif // ARRAY_BINARY_H
