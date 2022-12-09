//
// Created by Destiny on 2022/9/24.
//

#ifndef MONOTONOUS_STACK_NEXTBIGGERELEMENT_H
#define MONOTONOUS_STACK_NEXTBIGGERELEMENT_H

#include "stack"
#include <iostream>
#include <vector>
using namespace std;

class NextBiggerElement {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2);
  vector<int> nextGreaterElement2(vector<int> &nums);
};

#endif // MONOTONOUS_STACK_NEXTBIGGERELEMENT_H
