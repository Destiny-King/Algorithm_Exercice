//
// Created by Destiny on 2022/7/5.
//

#ifndef ARRAY_REMOVEELEMENTS_H
#define ARRAY_REMOVEELEMENTS_H

#include <iostream>
#include <vector>
using namespace std;

class RemoveElements {
public:
  int removeElement_Violent(vector<int> &nums, int val);       //暴力解法
  int removeElement_DoublePointer(vector<int> &nums, int val); //双指针解法
  int removeElement_OppositeDoublePointer(vector<int> &nums,
                                          int val); //相向双指针解法
};

#endif // ARRAY_REMOVEELEMENTS_H
