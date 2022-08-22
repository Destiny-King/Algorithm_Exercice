//
// Created by Destiny on 2022/8/22.
//

#ifndef HASH_ARRAYINTERSECTION_H
#define HASH_ARRAYINTERSECTION_H
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class ArrayIntersection {
public:
  vector<int> intersection(vector<int> &num1, vector<int> &num2);
  void traverseArray(vector<int> &num);
};

#endif // HASH_ARRAYINTERSECTION_H
