//
// Created by Destiny on 2022/10/9.
//

#ifndef STRING_COMBINATION_H
#define STRING_COMBINATION_H

#include <iostream>
#include <vector>
using namespace std;

class Combination {
public:
  vector<vector<int>> combine(int n, int k);

private:
  void backtracking(int n, int k, int startIndex);

  vector<vector<int>> result;
  vector<int> path;
};

#endif // STRING_COMBINATION_H
