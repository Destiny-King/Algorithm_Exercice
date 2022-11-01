//
// Created by Destiny on 2022/10/31.
//
#include "BagProblem.h"

int main() {
  system("chcp 65001");

  BagProblem bagProblem;

  vector<int> weight = {1, 3, 4};
  vector<int> value = {15, 20, 30};
  int bagweight = 4;
  bagProblem.bagProblem(weight, value, bagweight);
  bagProblem.bagProblem2(weight, value, bagweight);

  return 0;
}